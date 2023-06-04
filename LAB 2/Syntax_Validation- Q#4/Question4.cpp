#include <iostream>
#include <stack>
#include <fstream>
#include <string>

using namespace std;

bool isSyntaxValid(const string& code) {
    stack<char> bracketStack;

    for (char ch : code) {
        if (ch == '{' || ch == '[' || ch == '(') {
            bracketStack.push(ch);
        } else if (ch == '}' || ch == ']' || ch == ')') {
            if (bracketStack.empty()) {
                return false; // Unmatched closing bracket
            }

            char top = bracketStack.top();
            bracketStack.pop();

            if ((ch == '}' && top != '{') || (ch == ']' && top != '[') || (ch == ')' && top != '(')) {
                return false; // Mismatched opening and closing brackets
            }
        }
    }

    return bracketStack.empty(); // All opening brackets matched
}

int main() {
    string filename;
    cout << "Enter the name of the code file: ";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Unable to open the file." << endl;
        return 1;
    }

    string code;
    string line;
    while (getline(file, line)) {
        code += line;
    }

    file.close();

    if (isSyntaxValid(code)) {
        cout << "Syntax is valid." << endl;
    } else {
        cout << "Syntax is invalid." << endl;
    }

    return 0;
}

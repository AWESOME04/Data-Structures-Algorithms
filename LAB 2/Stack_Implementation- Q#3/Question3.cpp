#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> stack;

public:
    void push(int item) {
        stack.push_back(item);
    }

    void pop() {
        if (!isEmpty())
            stack.pop_back();
        else
            cout << "Stack is empty. Cannot perform pop operation." << endl;
    }

    int top() {
        if (!isEmpty())
            return stack.back();
        else {
            cout << "Stack is empty. No top element to retrieve." << endl;
            return -1; // Return a default value indicating an empty stack
        }
    }

    bool isEmpty() {
        return stack.empty();
    }

    int size() {
        return stack.size();
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Top element: " << myStack.top() << endl;
    cout << "Size: " << myStack.size() << endl;

    myStack.pop();

    cout << "Top element: " << myStack.top() << endl;
    cout << "Size: " << myStack.size() << endl;

    myStack.pop();
    myStack.pop();

    if (myStack.isEmpty())
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty." << endl;

    return 0;
}


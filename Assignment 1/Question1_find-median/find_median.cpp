#include <iostream>
#include <vector>
#include <algorithm>

double findMedian(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end()); // Sort the array in ascending order
    int length = arr.size();
    int middleIndex = length / 2;

    if (length % 2 == 1) {
        // Array length is odd
        return arr[middleIndex];
    } else {
        // Array length is even
        return (arr[middleIndex - 1] + arr[middleIndex]) / 2.0;
    }
}

int main() {
    std::vector<int> array = {9, 4, 5, 1, 7, 78, 22, 15, 96, 45, 25};
    double median = findMedian(array);
    std::cout << "Median: " << median << std::endl;

    return 0;
}



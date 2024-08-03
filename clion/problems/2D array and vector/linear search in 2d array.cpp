//
// Created by chaudhuree on 8/3/2024.
//
#include <iostream>
using namespace std;

bool linearSearch(int arr[][3], int rows, int cols, int target) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] == target) {
                cout << "Element " << target << " found at position (" << i << ", " << j << ")" << endl;
                return true;
            }
        }
    }
//    cout << "Element " << target << " not found in the array." << endl;
    return false;
}

int main() {
    // Create and initialize a 2D array and vector
    const int rows = 3;
    const int cols = 3;
    int arr[rows][cols] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };

    // Target element to search for
    int target;
    cout << "Enter the element to search for: ";
    cin >> target;

    // Perform linear search
    bool found = linearSearch(arr, rows, cols, target);

    if (!found) {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}

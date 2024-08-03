//
// Created by chaudhuree on 8/3/2024.
//
#include <iostream>
using namespace std;

int main() {
    // Create and initialize a 2D array and vector
    const int rows = 3;
    const int cols = 3;
    int arr[rows][cols] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };

    // Print the original 2D array and vector
    cout << "Original 2D array and vector:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Create a transposed 2D array and vector
    int transposed[cols][rows];

    // Transpose the array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = arr[i][j];
        }
    }

    // Print the transposed 2D array and vector
    cout << "Transposed 2D array and vector:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//
// Created by chaudhuree on 8/3/2024.
//
#include <iostream>
using namespace std;

int main() {
    // Create a 2D array and vector
    const int rows = 3;
    const int cols = 3;
    int arr[rows][cols];

    int brr[rows][cols] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };

    // Insert elements into the 2D array and vector
    int value = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = value++;
        }
    }

    // Print the 2D array and vector row-wise
    cout << "Row-wise print:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Print the 2D array and vector column-wise
    cout << "Column-wise print:" << endl;
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Column-wise print another way:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}

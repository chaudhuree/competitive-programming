//
// Created by chaudhuree on 8/3/2024.
//
#include <iostream>
#include <limits.h> // For INT_MAX and INT_MIN
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

    // Initialize min and max variables
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    // Iterate through the 2D array and vector to find min and max values
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
            }
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }

    // Print the results
    cout << "Minimum value in the 2D array and vector: " << minVal << endl;
    cout << "Maximum value in the 2D array and vector: " << maxVal << endl;

    return 0;
}

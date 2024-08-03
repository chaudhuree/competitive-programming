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

    // Arrays to store the sum of each row and each column
    int rowSum[rows] = {0};
    int colSum[cols] = {0};

    // Calculate the sum of each row and each column
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            rowSum[i] += arr[i][j];
            // first loop a i er value 0 and rowSum[0].so row 0 er sum joma hobe
            // second loop a i er value 1. so rowSum[1] a sum value joma hobe
            colSum[j] += arr[i][j];
            /*
             * j dea index count hocce colSum a.
             * row 0 but j er traverse hobe and j er value hobe 0,1,2..
             * so colSum[j] e j value jabe ta first jone jabe colSum[0] te
             * porer ta jabe colSum[1] e, er porer ta colSum[2] aivabe
             *
             * */
        }
    }

    // Print the sum of each row
    cout << "Sum of each row:" << endl;
    for (int i = 0; i < rows; ++i) {
        cout << "Row " << i + 1 << ": " << rowSum[i] << endl;
    }

    // Print the sum of each column
    cout << "Sum of each column:" << endl;
    for (int j = 0; j < cols; ++j) {
        cout << "Column " << j + 1 << ": " << colSum[j] << endl;
    }

    return 0;
}

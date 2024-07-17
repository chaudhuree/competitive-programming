//
// Created by chaudhuree on 7/18/2024.
//
// pyramid size, Row = N, Column = 2N-1
// 3 main conditions
// a. print space for each row, column < 2*N - 1
// b. print start for K < 2*Row + 1
// c. print space for the remaining column
// print space inside star,
// for starting of the column mean, for k=0 or end of the column, k = 2 * row print start
// and other columns will be filled with space
// and the last row will be filled with stars.

//enter pyramid size:4
//
//   *
//  * *
// *   *
//*******

#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "enter pyramid size: ";
    cin >> N;
    cout << endl;

    for (int row = 0; row < N; row++) {
        int k = 0;
        for (int col = 0; col < (2 * N) - 1; col++) {
            if (col < N - row - 1) {
                cout << " ";
            } else if (k < 2 * row + 1) {
                if (k == 0 || k == 2 * row || row == N - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
                k++;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
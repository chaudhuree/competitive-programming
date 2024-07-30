//
// Created by chaudhuree on 7/30/2024.
//   1
//  121
// 12321
//1234321
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 4;
    for (int row = 0; row < n; row++) {
        //first print space
        for (int space = 0; space < n - row - 1; space++) {
            cout << " ";
        }
        // second print number in reverse order
        for (int value = 0; value <= row; value++) {
            cout << value + 1;
        }

        // third value
        for (int value = 0; value < row; value++) {
            cout << row - value;
        }
        // fourth space
        for (int space = 0; space < n - 1 - row; space++) {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}

//
// Created by chaudhuree on 7/30/2024.
//
//1
//1 2
//1   3
//1     4
//1 2 3 4 5
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int row = 5;

    for (int i = 0; i < row; i++) {
        for (int col = 0; col < i + 1; col++) {
            if (col == 0 || col == i || i == row - 1) {
                cout << col + 1 << " ";
            } else {
                cout << " " << " ";
            }
        }
        cout << endl;
    }

    return 0;
}


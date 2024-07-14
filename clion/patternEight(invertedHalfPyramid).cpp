//
// Created by chaudhuree on 7/14/2024.
//enter pyramid size:4
//
// *  *  *  *
//  *  *  *
//   *  *
//    *

#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "enter pyramid size: ";
    cin >> size;
    cout << endl;

    for (int row = 0; row < size; row++) {
        for (int space = 0; space < row; space++) {
            cout << " ";
        }
        for (int star = 0; star < size - row; star++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
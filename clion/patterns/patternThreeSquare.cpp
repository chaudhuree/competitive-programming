//
// Created by chaudhuree on 7/14/2024.
// * * *
// * * *
// * * *
//
#include <iostream>

using namespace std;

int main() {
    int size ;
    cout << "size of square: ";
    cin >> size;
    cout << endl;
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

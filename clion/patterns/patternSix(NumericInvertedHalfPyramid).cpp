//
// Created by chaudhuree on 7/14/2024.
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1
//

#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "size of pyramid: ";
    cin >> size;
    cout << endl;


    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size - row; col++) {
            cout << col + 1;
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
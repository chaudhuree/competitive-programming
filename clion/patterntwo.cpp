//
// Created by chaudhuree on 7/14/2024.
//  *
//  * *
//  * * *
//
#include <iostream>

using namespace std;

int main() {

    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

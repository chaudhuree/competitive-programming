//
// Created by chaudhuree on 7/23/2024.
//
//enter array size:2
//enter array values:11 12
//given array values are:11 12

#include <iostream>

using namespace std;


int main() {

    int sizeOfArray = (cin >> (cout << "enter array size:", sizeOfArray), sizeOfArray);
    int array[sizeOfArray];

    cout<< "enter array values:" ;
    for (int i = 0; i <= sizeOfArray - 1; i++) {
        cin >> array[i];
    }

    cout << "given array values are:";
    for (int i = 0; i <= sizeOfArray - 1; i++) {
        cout << array[i] << " ";
    }

    return 0;

}
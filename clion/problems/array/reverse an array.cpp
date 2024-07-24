//
// Created by chaudhuree on 7/23/2024.
//
//enter array size:3
//enter array values:1 3 4
//given array values are:1 3 4
//reversed array values:4 3 1

#include <iostream>

using namespace std;

void reverseArray(int arr[], int arraySize) {
    cout << endl << "reversed array values:";
    // for (int i = arraySize - 1; i >= 0; i--) {
    //     cout << arr[i] << " ";
    // }

    // or,
    for (int i = 0; i < arraySize; i++) {
        cout << arr[arraySize - 1 - i] << " ";
    }
}

int main() {

    int sizeOfArray = (cin >> (cout << "enter array size:", sizeOfArray), sizeOfArray);
    int array[sizeOfArray];

    cout << "enter array values:";
    for (int i = 0; i <= sizeOfArray - 1; i++) {
        cin >> array[i];
    }

    cout << "given array values are:";
    for (int i = 0; i <= sizeOfArray - 1; i++) {
        cout << array[i] << " ";
    }

    reverseArray(array, sizeOfArray);
    return 0;

}
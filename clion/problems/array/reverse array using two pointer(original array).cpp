//
// Created by chaudhuree on 7/23/2024.
//
//enter array size:5
//enter array values:1 3 4 5 6
//given array values are:1 3 4 5 6
//printing the reversed array values:6 5 4 3 1

#include <iostream>

using namespace std;

void reverseArray(int arr[], int arraySize) {
    int start = 0;
    int end = arraySize - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
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

    cout << endl << "printing the reversed array values:";
    for (int i = 0; i < sizeOfArray; i++) {
        cout << array[i] << " ";
    }
    return 0;

}
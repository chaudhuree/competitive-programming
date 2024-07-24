//
// Created by chaudhuree on 7/24/2024.
//
#include <iostream>
#include <algorithm>

using namespace std;

int print(int *arr, int size) {
    cout << "sorted array : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int arraySize = (cin >> (cout << "give the size of array : ", arraySize), arraySize);
    int array[arraySize];
    // creating array from user input
    cout << "give array data : ";
    for (int i = 0; i < arraySize; ++i) {
        cin >> array[i];
    }

    // sort the array in ascending order
    sort(array, array + arraySize); // NlogN time
    // print the sorted array
    print(array, arraySize);

    // sort the array in descending order and print
    sort(array, array + arraySize, greater<int>());
    print(array, arraySize);
    return 0;

}
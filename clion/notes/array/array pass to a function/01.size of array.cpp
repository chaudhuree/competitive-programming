//
// Created by chaudhuree on 7/23/2024.
//
#include <iostream>

using namespace std;

void printArray(int arr[]) {
    cout << "Inside printArray function: " << sizeof(arr) << endl;
    // aikhane 8 print korbe but aita to righn na. because aikhane array er actual value na eshe address gulo ashe.even aikhane jodi amra array ta print o kori tahole aikhane only 2 ta element show korbe cause amader jokhn array length ber korbo (sizeof(arr)/sizeof(int) = 2) tokhn 2 pawa jabe.

    int arraySize = sizeof(arr) / sizeof(int);

    cout << "Inside printArray function: ";
    for (int i = 0; i < arraySize; i++) {
        cout << arr[i] << " ";
    }
}

int main() {


    int array[] = {1, 2, 3, 4, 5};

    cout << "Inside main: " << sizeof(array) << endl;

    printArray(array);

    cout << "- Inside main function: ";
    int arraySize = sizeof(array) / sizeof(int);
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }
    return 0;

}
//
// Created by chaudhuree on 7/23/2024.
//
#include <iostream>

using namespace std;

void printArray(int arr[],int arraySize) {

    arr[0] =100; // aikhane jehetu array er reference ashe so ak jajaygay cnage korle sob jaygay change hoye jabe

    cout << "Inside printArray function: ";
    for (int i = 0; i < arraySize; i++) {
        cout << arr[i] << " ";
    }
}

// printArray(int * arr, int arraySize){} // aivabeo kora jabe. pointer send kora hoitice r ki
int main() {


    int array[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(array) / sizeof(int);

    printArray(array, arraySize);


    cout << " - Inside main function: ";
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }


    return 0;

}
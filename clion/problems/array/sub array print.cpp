//
// Created by chaudhuree on 7/24/2024.
//
// number of subarray = (n(n+1)) / 2
//or, (n(n-1))/2 + n

#include <iostream>

using namespace std;

void subArray(int arr[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        for (int j = i; j < arraySize; j++) {
            //cout << i << j ;
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }

            cout << endl;
        }
        cout << endl;
    }
}

int main() {

    int array[5] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);
    subArray(array, size);
    return 0;

}
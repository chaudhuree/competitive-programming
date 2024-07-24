//
// Created by chaudhuree on 7/23/2024.
//
#include <iostream>

using namespace std;
//#define size(arr) sizeof(arr)/sizeof(arr[0]);
int main() {

    int array[10] = {1, 2, 3, 4, 6, 7, 10, 14, 16, 21};
//    note: if we pass some value like int array[10] = {1, 2, 3} then other value will be 0 by default
    int size = sizeof(array) / sizeof(int); //length of an array

    // int n =size(array); // note: this will also give array size

    cout << size << endl;

//    print the values of an array
    for(int i=0 ; i<size; i++){
        cout << array[i] << ",";
    }
    return 0;

}

// int arr[]={1,2}; this is also valid,
// but we can not add another value to this array.
// like arr[2] = 3 will not work;
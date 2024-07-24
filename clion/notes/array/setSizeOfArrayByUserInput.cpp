//
// Created by chaudhuree on 7/23/2024.
//
#include <iostream>

using namespace std;

int main() {

    int arraySize = (cin >> (cout << "enter array size: ", arraySize), arraySize);
    // set array size by user input
    int array[arraySize];

    // all the value will be garbage here

    //for (int i=0;i<arraySize;i++){
    //    cout << array[i] << ",";
    //}

    // enter array size:6
    // 920647328,25,1283004864,32759,1283004688,32759,


    // suppose if we add some value like array[0]=1; array[1]=23, then only first two value will be set but other value will be garbage value. meanwhile in static array initialization(i.e, array[100]) if we set any of the value of an array then other value become 0;

    // set some value of the array and print
    array[0]=10;
    array[1]=15;

    for (int i=0;i<arraySize;i++){
        cout << array[i] << ",";
    }
    // enter array size:6
    // 10,15,2017859968,32759,2017859792,32759,
    return 0;

}
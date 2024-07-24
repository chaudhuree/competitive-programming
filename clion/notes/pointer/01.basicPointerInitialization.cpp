//
// Created by chaudhuree on 7/22/2024.
//
#include <iostream>

using namespace std;


int main() {

    int a = 10;

//    address of the actual value
    //cout << &a << endl;

//    pointer set korar way
    int *aptr = &a;

//    address of pointer
    //cout << &aptr << endl;

//    pointer k pointer dewar way
    //int ** aaptr = &aptr;

//    this will show the address of the actual bucket
    //cout << &a << endl;
    //cout << aptr << endl;

//    this will show the value of the actual bucket and where the pointer is referencing now
    //cout << a << endl;
    //cout << *aptr << endl;



//     akhn a k change kora or aprt a k change kora aki kaj. duitia same value k refer kortice

    //*aptr++; // ❌❌ note: this will not work. pointer value will not change like this

    *aptr = *aptr +1; // 11
    a++; // 12
    cout << a << endl;
    cout << *aptr << endl;

//    Null pointer
    //int *nptr = 0;
//    or
    //int *npptr = NULL;
//    note: amra kintu null  pointer k cout korte parbo na. aita segmentation error dibe
    return 0;

}
//
// Created by chaudhuree on 7/22/2024.
//
#include <iostream>

using namespace std;


int main() {

    int a = 10;
    int &b = a;

    b++; // 11
    a++; // 12

    cout << a << endl;
    cout << b << endl;

    return 0;

}
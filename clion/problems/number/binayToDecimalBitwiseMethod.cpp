//
// Created by chaudhuree on 7/21/2024.
// bitwise method
//

#include <iostream>
#include <cmath>

using namespace std;

int decimalToBinary(int n) {
    int binaryno = 0;
    int i = 0;

    while (n > 0) {
        int bit = (n & 1);
        binaryno = pow(10, i) * bit + binaryno;
        i++;
        n = n >> 1;
    }
    return binaryno;

}


int main() {
    int N = (cin >> (cout << "enter decimal number:", N), N);

    cout << decimalToBinary(N);

    return 0;
}
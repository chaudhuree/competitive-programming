//
// Created by chaudhuree on 7/21/2024.
//

#include <iostream>
#include <cmath>

using namespace std;

int decimalToBinary(int n) {
    int decimalNo = 0;
    int i = 0;

    while (n) {
        int bit = n % 10;
        decimalNo = pow(2, i) * bit + decimalNo;
        i++;
        n = n / 10;
    }
    return decimalNo;

}


int main() {
    int N = (cin >> (cout << "enter binary number:", N), N);
    cout << binaryToDecimal(N);

    return 0;
}
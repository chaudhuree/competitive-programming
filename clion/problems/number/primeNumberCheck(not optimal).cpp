//
// Created by chaudhuree on 7/15/2024.
//


#include <iostream>

using namespace std;

int main() {

    int givenNumber;
    bool isPrime = true;
    cout << "give me a positive integer number to check: ";
    cin >> givenNumber;
    cout << endl;

    if (givenNumber == 1 || givenNumber == 0) {
        isPrime = false;
    }

    for (int i = 2; i < givenNumber; i++) {
        if (givenNumber == 2) {
            isPrime = true;
            break;
        }
        if (givenNumber % i == 0) {
            isPrime = false;
            break;
        }

    }
    if (isPrime) {
        cout << givenNumber << " is a prime number";
    } else {
        cout << givenNumber << " is not a prime number";
    }

    return 0;
}

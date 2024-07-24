//
// Created by chaudhuree on 7/22/2024.
//
#include <iostream>

using namespace std;

// pass by value kora hoyeche. pointer dea o kora jeto. but aikhane & dea kora hoyeche.
void applyTax(int &money) {

    double tax = 0.1; // 10% tax
    money = money - (money * tax);

}

int main() {

    int income = (cin >> (cout << "enter income amount: ", income), income);
    applyTax(income);
    cout << "income after tax cutting: " << income << endl;
    return 0;

}
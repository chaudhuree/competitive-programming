//
// Created by chaudhuree on 7/30/2024.
//
/*
    1
   121
  12321
 1234321
123454321
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 5;
    int k = n;
    for (int row = 0; row < n; row++) {

        int c = 0;
        for (int col = 0; col < k; col++) {
            if (col < n - row - 1) {
                cout << " ";
            } else if (col < n) {
                cout << c + 1;
                c++;
            } else {
                --c;
                cout << c;
            }

        }

        k++;
        cout << endl;
    }
    return 0;
}

//
// Created by chaudhuree on 8/2/2024.
//
#include <bits/stdc++.h>

using namespace std;


int main() {
//    int n = (cin >> (cout << "give vector size: ", n), n);
    vector<int> arr{10, 20, 30, 40, 70};

    int sum = 40;
    int i, j;

    for (i = 0; i < arr.size(); i++) {
        int firstElement = arr[i];
        for (j = i + 1; j < arr.size(); j++) {
            if (firstElement + arr[j] == sum) {
                cout << firstElement << "," << arr[j] << " sum of this two element is equal to the query" << endl;
            }
        }
    }

    return 0;
}

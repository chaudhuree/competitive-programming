//
// Created by chaudhuree on 8/2/2024.
//
#include <bits/stdc++.h>

using namespace std;


int main() {
//    int n = (cin >> (cout << "give vector size: ", n), n);
    vector<int> arr{10, 20, 30, 40, 70};

    int sum = 120;
    int i, j, k;

    for (i = 0; i < arr.size(); i++) {
        int firstElement = arr[i];
        for (j = i + 1; j < arr.size(); j++) {
            int secondElement = arr[j];
            for (k = i + 2; k < arr.size(); k++) {
                if (firstElement + secondElement + arr[k] == sum) {
                    cout << firstElement << "," << secondElement << "," << arr[k]
                         << " sum of this three element is equal to the query" << endl;
                }
            }
        }
    }

    return 0;
}

//
// Created by chaudhuree on 8/2/2024.
//give vector size:3
// 4 4 6
// unique item is: 6
#include <bits/stdc++.h>

using namespace std;

int findUnique(vector<int> arr) {
    int ans = 0;

    for (int i = 0; i < arr.size(); i++) {
        //ans = ans xor arr[i];
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int n = (cin >> (cout << "give vector size: ", n), n);

    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    int uniqueData = findUnique(arr);

    cout << "unique item is: " << uniqueData;
    return 0;
}

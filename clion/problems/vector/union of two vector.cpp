//
// Created by chaudhuree on 8/2/2024.
//union of two vector: 1,2,3,4,5,6
#include <bits/stdc++.h>

using namespace std;


int main() {
//    int n = (cin >> (cout << "give vector size: ", n), n);
    vector<int> arr{1, 2, 3};
    vector<int> brr{4, 2, 3, 5, 6};
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++) {
        ans.emplace_back(arr[i]);
    }
    for (int i = 0; i < brr.size(); i++) {
        if (brr[i] == ans[i]) {
            ans.emplace_back(INT_MIN);
        } else {

            ans.emplace_back(brr[i]);
        }
    }
    cout << "union of two vector: ";
    for (auto x: ans) {
        if (x != INT_MIN) { cout << x << ","; }
    }

    return 0;
}


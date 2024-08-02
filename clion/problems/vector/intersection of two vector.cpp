//
// Created by chaudhuree on 8/2/2024.
// intersection of two vector: 4,5,6
#include <bits/stdc++.h>

using namespace std;


int main() {
//    int n = (cin >> (cout << "give vector size: ", n), n);
    vector<int> arr{1, 2, 3,4,5,6};
    vector<int> brr{4, 5, 6,7,8,9};
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++) {
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                ans.emplace_back(brr[j]);
            }
        }
    }

    cout << "intersection of two vector: ";
    for (auto x: ans) {
        cout << x << ",";
    }

    return 0;
}

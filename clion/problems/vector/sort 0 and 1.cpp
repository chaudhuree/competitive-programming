//
// Created by chaudhuree on 8/2/2024.
//0 0 0 0 1 1 1 1
#include <bits/stdc++.h>

using namespace std;


int main() {
//    int n = (cin >> (cout << "give vector size: ", n), n);
    vector<int> arr{1,0,0,1,1,1,0,0};

    int startIndex,endIndex,i;
    startIndex=0;
    endIndex=arr.size()-1;
    i=0;

    while (startIndex<endIndex){
        if(arr[i]==0){
            swap(arr[i],arr[startIndex]);
            i++;
            startIndex++;
        } else{
            swap(arr[i],arr[endIndex]);
            endIndex--;
            /*
             * we will not move forward the index here. because after swaping value of end index is go
             * to the current index . but we do not know the swapped endIndex value was 0 or 1,(suppose current index i's value is 1. so arr[i] value should be swapped with arr[endIndex]. but arr[endIndex] value is also 1. so after swapping the current index arr[i] value is 1 again)
             * if it is 1 then it will replace the currentIndex i and as we move the index forward
             * then it will not check the value and will give error sort value
            */
        }
    }

    // print the array
    for(auto x:arr){
        cout<< x<<" ";
    }


    return 0;
}


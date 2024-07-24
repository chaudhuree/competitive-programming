//
// Created by chaudhuree on 7/24/2024.
//
#include <iostream>
#include <algorithm>

using namespace std;
#define size(array) sizeof(array)/sizeof (array[0]);

int liner_search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 7, 9, 12, 42, 1};
    int n = size(arr);
    int key = (cin >> (cout << "enter search key: ", key), key);
    int index = liner_search(arr, n, key);
    if (index != -1) {
        cout << "your given key is found at index : " << index;
    } else {
        cout << "your given key is NOT Found";
    }
    return 0;

}
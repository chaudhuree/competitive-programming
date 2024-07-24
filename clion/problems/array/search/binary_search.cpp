//
// Created by chaudhuree on 7/24/2024.
//
// note: binary search e array obossoi sorted hoite hobe

#include <iostream>

using namespace std;
#define size(array) sizeof(array)/sizeof (array[0]);

int binary_search(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;


    while (start <= end) {
        int mid = (start + end) / 2; // mid k while loop er vitore likhte hobe nahole kaj korbe na
        if (arr[mid] == key) {
            return mid;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 6, 7, 12, 13, 16, 24, 26, 28, 36};
    int n = size(arr)
    int key = (cin >> (cout << "enter search key: ", key), key);
    int index = binary_search(arr, n, key);
    if (index != -1) {
        cout << "your given key is found at index : " << index;
    } else {
        cout << "your given key is NOT Found";
    }
    return 0;

}
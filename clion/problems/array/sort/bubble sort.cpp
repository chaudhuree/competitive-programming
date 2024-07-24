//
// Created by chaudhuree on 7/24/2024.
//
#include <bits/stdc++.h>

using namespace std;

// A function to implement bubble sort
void bubble_sort(int arr[], int n) {
    int i, j;
    {
        for (i = 0; i < n - 1; i++)

            for (j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
            }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main() {
    int arr[] = {11,5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}

//
// Created by chaudhuree on 7/24/2024.
//
#include <bits/stdc++.h>

using namespace std;

void selection_sort(int arr[], int n) {

    for (int pos = 0; pos <= n - 2; pos++) {
        // note: last item er aag porjonto check korte hobe. jodi ai porjonto sort thake tahole last er tao sort thakbe
        int min_position = pos;
        for (int j = pos; j < n; j++) {
            if (arr[min_position] > arr[j]) {
                min_position = j;
            }

        }
        swap(arr[min_position], arr[pos]);

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
    int arr[] = {11, 5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, N);

    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}

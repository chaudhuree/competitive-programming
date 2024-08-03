//
// Created by chaudhuree on 8/3/2024.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a 2D vector
    int rows = 3;
    int cols = 3;
    vector <vector<int> > varr;
    vector<vector<int> > vbrr(rows, vector<int>(cols,0)); // vector with all 0 value

    vector<vector<int> > vec(rows, vector<int>(cols));
    // Insert elements into the 2D vector
    int value = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            vec[i][j] = value++;
        }
    }

    // Print the 2D vector row-wise
    cout << "Row-wise print:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    // Print the 2D vector column-wise
    cout << "Column-wise print:" << endl;
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    int row = 5;

    for (int i = 0; i < row; i++) {
        for (int col = 0; col < i + 1; col++) {
            if (col == 0 || col == i || i == row - 1) {
                cout << col + 1 << " ";
            } else {
                cout << " " << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int size ;
    cout << "enter pyramid size: ";
    cin >> size;
    cout << endl;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < row + 1; col++) {
            cout << col+1 << " ";
        }
        cout << endl;
    }

    return 0;
}

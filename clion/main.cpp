#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "size of pyramid: ";
    cin >> size;
    cout << endl;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size - row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

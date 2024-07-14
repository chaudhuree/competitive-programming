#include <iostream>

using namespace std;

int main() {

    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < row+1; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

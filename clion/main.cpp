
#include <iostream>

using namespace std;

int main() {
    int size ;
    int colSize =10;
    cout << "enter size of hollow pattern: ";
    cin >> size;
    cout << endl;

    for (int row = 0; row < size; row++) {
        if (row == 0 || row == size-1) {
            for (int col = 0; col < colSize; col++) {
                cout << "*";
            }
        } else{
            cout << "*";
            for(int col= 0; col < colSize-2; col++){
                cout<<" ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
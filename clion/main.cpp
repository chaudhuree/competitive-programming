#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "enter pyramid size: ";
    cin >> N;
    cout << endl;

    for(int row =0; row<N; row++){
        int k=0;
        for(int col=0; col<(2*N)-1; col++){
            if(col<N-row-1){
                cout<<" ";
            }else if(k< 2*row +1){
                if(k==0 || k==2*row || row==N-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
                k++;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
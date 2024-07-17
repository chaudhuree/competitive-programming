//
// Created by chaudhuree on 7/18/2024.
//******
//*   *
//*  *
//* *
//**
//*
#include <iostream>
using namespace std;

int main() {
    int N=6;
    cout << "enter pyramid size: ";
    cin >> N;
    cout << endl;

    for(int row =0; row<N; row++){
        for(int col=0; col<N; col++){
            if(row==0 ||  col==0 || col==N-row-1 ){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout<<endl;
    }

    return 0;
}
//
// Created by chaudhuree on 7/22/2024.
//
#include <iostream>

using namespace std;

void coutView(int *viewcount){
    *viewcount = *viewcount+1;
}

int main() {

    int views = 10;
//    if we pass just views then it will create a copy of this variable
//    and when it increments the value of the parameter it will increment the value, but
//    it's lifecycle will end when the function finish its execution

//    so here we will pass the address. so that the parameter in the countView will
//    point to the views now. and if we increment it in the countView function. it will
//    also modify the actual views in the main function
    coutView(&views);
    cout << views << endl;
    return 0;

}
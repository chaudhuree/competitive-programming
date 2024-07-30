//
// Created by chaudhuree on 7/29/2024.
//

#include<iostream>

using namespace std;


int main() {

    int arr[10] = {1, 2, 3, 4};

    // note: 1
    //cout << arr <<endl; // aita arr er fist element i mean 0th element er address bujhay

    int *arrptr = arr;
    // note: 2
    // similar way te cout<< arrptr; o array er first emement er address print korbe
    // note:3
    // arr+1; -> aita array er second element i mean arr[1] er address k refer kore.
    // ptr+1; o same kaj kore.means 1 add korle aita 1 add kortice na. borong address er sathe 4byte
    // add korbe because int 4 byte er hoy.

    // note: 4
    // amra jodi array er element gulo print korte chai with address using pointer then
    //    for(int i=0;i<10;i++){
    //        cout << arrptr << "-" << *(arrptr) << endl;
    //        arrptr = arrptr+1;
    //    }

    // note: 5
    //or, using arr ->

    //    for(int i=0;i<10;i++){
    //        cout <<  *(arr +i) << endl;
    //        // note: 6,  but arr = arr +1; is not allowed. karon aivabe likhle array reasign hoy.
    //        // but array read only so array te kichu reassign kora jay na. but pointer hoile aita
    //        // allowed
    //    }

    // note: 7
    // full array k point korar way
    // amader pointer er sathe array er exact size mention kore dite hobe
    // and arr er age & must add kore dite hobe. jodio single element k point korar time a
    // & use kora lagto na

    int (*fullarrptr)[10] = &arr; // ✔✔ pointer of 10 array element address/value
    // int *fullarrptr[10] = &arr; ❌❌ this is wrong. aitar mane array of 10 pointer.

    // after setting a pointer to a whole array we can access data like this
    // *fullarrptr1 = arr[0];  *fullarrptr2 = arr[1]; and so on
    // (*fularrptr) this means arr -> base address of the array
    return 0;

}
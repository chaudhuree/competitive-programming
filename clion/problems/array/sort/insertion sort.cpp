//
// Created by chaudhuree on 7/25/2024.
//

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // move element while comparison
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, N);
    printArray(arr, N);

    return 0;
}

/*
 * amra index 1 thke observation start korbo
 * index 1 er value ta k akta jaygay store korbo seta hoitice key.
 * akhn amra ai element ta k tar left er element gulor sathe comare korbo
 * so amader r akta varible nite hobe j
 * left e akta akta er sathe compare korbo so first a ai j er value i-1 nilei hobe
 *
 * then while loop e ashbo
 * condition onujaye j er value 0 er beshi hoite hobe. plus,
 * amra first a index 1 er value key te store korecilam
 * akhn dekhbo arr[j] mane er ager item er theke boro kina
 *
 * jodi boro hoy tahole amra shei ager value ta k key er value er jaygay boshay dibo
 *
 * j e to key er ager index store kora ache. so amra jodi j er sathe 1 plus kore dei taholei
 * seita index 1 k bujhabe. amra akhn just left item ta k j+1 a shoray dibo taholei left er
 * item ta 1 place move hoye right a ashlo
 *
 * er por amra j er value r o ak komabo. like this: j-1
 * akhn abr while loop a jabo. akhn dekhbo j er value 0 er soman ba beshi kina
 *
 * jodi j er value 0 er soman ba beshi hoy tahole amra akhn key er value jeita first a store korcilam
 * seitar sathe abr compare korbo aivabe hobe ki abr jodi dekhi arr[j] er value boro tahole aita k ak
 * space right a move koray dibo. r jodi dekhi boro na tahole to loop ta r chobei na.
 * tokhn loop er bahire chole ashbo
 *
 * akhn j er moddhe akta index ache jeita left akta item k target kore
 *
 * amra jehutu loop er bahire chole ashci so bojhai jaitice j akhn key er j value ta first
 * a store korechilar oitar value ai bortoman j index er value er thke choto na.
 * so amader akhn j+1 index a ai key er value ta boshay dite hobe
 *
 * aivabe first iterate hobe. then i er value i+1 = 2 hobe
 * j er value akta left a mane j=i-1 = 2-1 =1 hobe and abr while loop cholte thakbe
 * jotokhn na sort full hoy
 * */

//
// Created by chaudhuree on 7/15/2024.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {

    /*
     *
    vector<int> a;                                       // empty vector of ints
    vector<int> b (5, 10);                               // five ints with value 10
    vector<int> c (b.begin(),b.end());                   // iterating through second
    vector<int> d (c);                                   // copy of c
    vector<int> e (5);                              // Creates a vector of 5 integers, initialized to 0
    vector<int> f = {1, 2, 3, 4, 5};        // Creates a vector initialized with elements 1, 2, 3, 4, 5
    vector<int> g{1,2,3}
     * */
//    define a vector
    vector<string> myFriends;
//    push_back is used to add a copy of the object at the end of the vector. add data at the end of the vector
//    emplace_back constructs the object in-place at the end of the vector, eliminating unnecessary copies or moves.
    myFriends.emplace_back("shahriar"); //0
    myFriends.push_back("kabir"); //1
    myFriends.emplace_back("sOhan"); //2
    myFriends.push_back("chaudhuree"); //3

//    add item at the begining
    myFriends.insert(myFriends.begin(), "kazi");
//    add at a specific index
    myFriends.insert(myFriends.begin() + 2, "easha");

//     print value of any index
    cout << "at index 2 we have: " << myFriends[2] << endl;

//    size of vector
    cout << "size of myFriends is: " << myFriends.size() << endl;

//    remove last
    myFriends.pop_back();

//    romove from first
//    myFriends.erase(myFriends.begin());

//    romove item from using index number
//    myFriends.erase(myFriends.begin()+2);


//     Iterate over the vector using a range-based for loop
    for (const auto &value: myFriends) {  // it can be written like this (auto value: myFriends)
        std::cout << value << std::endl;
    }
//     another way to iterate
//    for (int i = 0; i < myFriends.size(); i++) {
//        std::cout << myFriends[i] << std::endl;
//    }
    return 0;
}


/*
 * vector creation using loop
   int n = (cin >> (cout<<"give vector size: ",n),n);

    vector<int> arr(n);

    for(int i =0;i<arr.size();i++){
        cin >> arr[i];
    }
    for(auto x:arr){
        cout << x << ",";
    }
    */
//
// Created by chaudhuree on 7/15/2024.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {

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
    for (const auto &value: myFriends) {
        std::cout << value << std::endl;
    }
//     another way to iterate
//    for (int i = 0; i < myFriends.size(); i++) {
//        std::cout << myFriends[i] << std::endl;
//    }
    return 0;
}
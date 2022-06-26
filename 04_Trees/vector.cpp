#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    // vector<int> *vd = new vector<int> ();//Method-2: Creating vector dynamically.
    vector<int> v;//Method-1: to Creat vector

    //Inserting an element to the vector.
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    //We also can change the elements of the vector by using []:
    v[1] = 100;
    v[2] = 200;
    //! [Warning]
    // v[4] = 500; // Do not use this for inserting a new value. Reason google it.

    //Deleting the last element from the vector.
    v.pop_back();

    //Printing the elements of the vector
    for (int i = 0; i < v.size(); i++)
    {
        //There are two method to access the indexes of the vector.
        // cout<<v[i]<<endl;//M-1:
        cout<<v.at(i)<<endl;//M-2: More safer to use.

    }
        //? We can use [ ]-> 1. get; 2. update.
    
    //To Print the size of the vector
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Cap: "<<v.capacity()<<endl;

    return 0;
}
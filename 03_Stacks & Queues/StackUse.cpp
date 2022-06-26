#include <iostream>
// #include "StackClassForArray.cpp"
// #include "StackClassUsingDynamicArray.cpp"
#include "StackClassUsingLL.h"
using namespace std;

int main(){
    /*
    ! ######### Stack Created Using Array ############ 
    //* Normar Array Stack
    //* DynamicArray
    //* Dynamic Array Stack using Templates.
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);

    cout<<"Top: "<<s1.top()<<endl;
    cout<<"Delete 1: "<<s1.pop()<<endl;
    cout<<"Delete 2: "<<s1.pop()<<endl;
    cout<<"Delete 3: "<<s1.pop()<<endl;
    cout<<"Delete 5: "<<s1.pop()<<endl;
    cout<<"Delete 4: "<<s1.pop()<<endl;
    cout<<"Size: "<<s1.size()<<endl;
    cout<<"Empty: "<<s1.isEmpty()<<endl;


    //* Inserting Char type data into the Stack.
    stack<char> s2;
    s2.push('A');
    s2.push('B');
    s2.push(67);
    s2.push(68);
    s2.push(97);

    cout<<"Top: "<<s2.top()<<endl;
    cout<<"Delete 1: "<<s2.pop()<<endl;
    cout<<"Delete 2: "<<s2.pop()<<endl;
    cout<<"Delete 3: "<<s2.pop()<<endl;
    cout<<"Delete 5: "<<s2.pop()<<endl;
    cout<<"Delete 4: "<<s2.pop()<<endl;
    cout<<"Size: "<<s2.size()<<endl;
    cout<<"Empty: "<<s2.isEmpty()<<endl;
    */
    //! ######### Creating Stack Using LL ###########
    stack<char> s3;
    s3.push('A');
    s3.push('B');
    s3.push('C');
    s3.push('D');
    s3.push('E');

    // Checking All the functions:
    cout<<"Top: "<<s3.top()<<endl;
    cout<<"Delete 1: "<<s3.pop()<<endl;
    cout<<"Delete 2: "<<s3.pop()<<endl;
    cout<<"Delete 3: "<<s3.pop()<<endl;
    cout<<"Delete 5: "<<s3.pop()<<endl;
    cout<<"Delete 4: "<<s3.pop()<<endl;
    cout<<"Top: "<<s3.top()<<endl;
    cout<<"Size: "<<s3.getSize()<<endl;
    cout<<"Empty: "<<s3.isEmpty()<<endl;


}
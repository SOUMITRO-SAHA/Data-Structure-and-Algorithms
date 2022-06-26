/*******************************************************************************************************************************

Array:
    1. Reverse
        -> Method - 1: [Using An Auxiliary Array]
    2. Left Shift
    3. Left Rotate
    4. Right Shift
    5. Right Rotate

********************************************************************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
#include "Array.h"
using namespace std;
// Reversing The Array Function:
template <class T>
void Array<T>::reverseMethod1()
{
    T *B;
    int i, j;
    B = new T[size];
    // Copying the element from 1st Array to 2nd Array:
    for (int i = length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    // Copying the element from 2nd Array to 1st Array:
    for (int i = 0; i < length; i++)
    {
        A[i] = B[i];
    }

    // Deleting the B array:
    delete[] B;
}
int main()
{
    Array<int> arr(10, 5);
    // Calling The Reverse Function:
    int a[] = {1, 2, 3, 4, 5};
    // Setting the Elements of the Array:
    arr.setArrayEl(a);
    cout << "Displaying the 1st Array: " << endl;
    arr.Display();

    // Calling the Reverse Function:
    arr.reverseMethod1();
    // By itSelf Printing the Final Array:
    cout << "Displaying the Reversed Array: " << endl;
    Display();

    return 0;
}
/********************************************************************************************************************************
                                                [Reversing Method - 1]
Here, We are using an Auxiliary Array or an extra Array.
Time Complexity of this Method is ->

********************************************************************************************************************************/
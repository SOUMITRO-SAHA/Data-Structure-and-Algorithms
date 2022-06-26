/*******************************************************************************************************************************

Array:
    1. Reverse
    2. Left Shift
    3. Left Rotate
        -> 4. Right Shift
        -> 5. Right Rotate

********************************************************************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
#include "Array.h"
using namespace std;

template <class T>
void Array<T>::rightShift()
{
    // Shifting All the Array Elements to the right:
    for (int i = length - 1; i > 0; i--)
    {
        A[i] = A[i - 1];
    }
    // Assigning Zero the the 0'th element:
    A[0] = 0;
}
template <class T>
void Array<T>::rightRotate()
{
    T last = A[length - 1];
    // Shifting All the Array Elements to the right:
    for (int i = length - 1; i > 0; i--)
    {
        A[i] = A[i - 1];
    }
    A[0] = last;
}

int main()
{
    Array<int> arr(10, 5);
    int a[] = {10, 20, 30, 40, 50};
    // Setting the Array Elements:
    arr.setArrayEl(a);
    // Displaying the Array:
    arr.Display();

    //  Calling Right Shift:
    // arr.rightShift();

    //  Calling Right Rotate:
    arr.rightRotate();
    arr.rightRotate();
    arr.rightRotate();
    // Displaying the Array:
    arr.Display();

    return 0;
}
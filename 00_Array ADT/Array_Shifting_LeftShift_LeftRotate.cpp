/*******************************************************************************************************************************

Array:
    1. Reverse
        -> 2. Left Shift
        -> 3. Left Rotate
    4. Right Shift
    5. Right Rotate

********************************************************************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
#include "Array.h"
using namespace std;
template <class T>
void Array<T>::leftShift()
{
    // Shifting All the Array Elements to the Left:
    for (int i = 0; i < length; i++)
    {
        A[i - 1] = A[i];
    }
    A[length - 1] = 0;
}
template <class T>
void Array<T>::leftRotate()
{
    T first = A[0];
    // Shifting All the Array Elements to the Left:
    for (int i = 0; i < length; i++)
    {
        A[i - 1] = A[i];
    }
    A[length - 1] = first;
}

int main()
{
    Array<int> arr(10, 5);
    int a[] = {1, 2, 3, 4, 5};
    // Setting the Array Elements:
    arr.setArrayEl(a);
    // Displaying the Array:
    arr.Display();

    // Calling First Time:
    //  Calling Left Rotate:
    arr.leftRotate();
    arr.leftRotate();
    arr.leftRotate();
    // Displaying the Array:
    arr.Display();

    return 0;
}
/*******************************************************************************************************************************

 * Array Reversing Method - 2
 * Swapping the i the Index fromthe start with the j'th index from the end.

*******************************************************************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
#include "Array.h"
using namespace std;

// Array Reversing Function Method - 2:
template <class T>
void Array<T>::reverseMethod2()
{
    // Swapping the i'th and j'th elements with each other:
    for (int i = 0, j = length - 1; i <= j; i++, j--)
    {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
}

int main()
{
    Array<int> arr(10, 5);
    int a[] = {1, 2, 3, 4, 5};
    // Setting the Array Elements:
    arr.setArrayEl(a);

    // Displaying the Elements:
    arr.Display();

    // Calling the Reverse Method 2:
    arr.reverseMethod2();

    // Displaying the Elements:
    arr.Display();

    return 0;
}
/*******************************************************************************************************************************

[Notes:]
Time-Complexity: O(n);

*******************************************************************************************************************************/
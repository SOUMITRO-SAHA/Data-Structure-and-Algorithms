#include <bits/stdc++.h>
#include <iostream>
#include "Array.h"
using namespace std;
// Rearranging Positive and Negative Numbers:
template <class T>
void Array<T>::RearrangePN()
{
    int i = 0, j = length - 1;
    while (i < j)
    {
        while (A[i] < 0)
            i++;
        while (A[j] >= 0)
            j--;
        if (i < j)
        {
            T temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
}

int main()
{
    Array<int> arr(10, 5);

    int a[] = {11, -12, 13, -14, 15};
    // setting array elements:
    arr.setArrayEl(a);

    // calling the Display Function:
    arr.Display();

    // Calling Rearrange Function:
    arr.RearrangePN();
    arr.Display();

    return 0;
}
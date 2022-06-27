#include <bits/stdc++.h>
#include <iostream>
#include "Array.h"
using namespace std;
// Creating a Function to check Whether an Array is Sorted or not:
template <class T>
bool Array<T>::isSorted()
{
    for (int i = 0; i < length; i++)
    {
        if (A[i] < A[i + 1])
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

// I want to insert an element such that the inserted Element comes in the sorted place:
/* TODO: Not Working */
template <class T>
void Array<T>::insertInSortedPlace(T x)
{
    int i = length - 1;
    if (length == size)
        return;
    while (x < A[i] && i >= 0)
    {
        A[i + 1] = A[i];
        i--;
    }
    A[i + 1] = x;
    length++;
}

// Sorted Function in Language:
void sortedInLan(bool sor)
{
    // Calling isSorted Function:
    if (sor)
        cout << "Sorted" << endl;
    else
        cout << "Not Sorted!" << endl;
}
int main()
{
    Array<int> arr(10, 5);

    int a[] = {11, -12, 13, -14, 15};
    // setting array elements:
    arr.setArrayEl(a);

    // calling the Display Function:
    arr.Display();

    // Calling isSorted Function:
    sortedInLan(arr.isSorted());

    // ---------------------------------------- //
    // Insert an Element in Sorted Place:
    // arr.insertInSortedPlace(10);
    // arr.Display();

    // ---------------------------------------- //

    return 0;
}
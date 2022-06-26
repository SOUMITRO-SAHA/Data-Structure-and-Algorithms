/***************************************************************************************************************************

Recursion Practice #3: Find all the Indices using Recursion

****************************************************************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// Function for the Finding all the Indices:
void findAllIndices(int a[], int size, int key)
{
    // Using Recursion:
    static int count = 1;
    static int index = 0;
    if (size == 0)
        return;
    if (key == a[0])
    {
        printf("The %d index of %d is %d\n", count, key, index);
        count++;
    }
    index++;
    findAllIndices(a + 1, size - 1, key);

    /*
    // Using Looping:
    for (int i = 0, j = 1; i < size; i++)
    {
        if (key == a[i])
        {
            printf("The %d index of %d is %d", j, key, i);
            cout << endl;
            j++;
        }
    }
    */
}

int main()
{
    int arr[] = {1, 2, 3, 3, 4, 5, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    // Taking value for the key:
    cout << "Enter the value of Key: ";
    cin >> key;

    // Calling the findAllIndices():
    findAllIndices(arr, size, key);

    return 0;
}
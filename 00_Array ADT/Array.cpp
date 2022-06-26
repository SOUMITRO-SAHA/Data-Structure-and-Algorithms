#include <bits/stdc++.h>
#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
    Array<int> arr(10);
    arr.Insert(0, 1);
    arr.Insert(1, 1);
    arr.Insert(2, 2);
    arr.Insert(3, 3);

    arr.Display();
    cout << "Delete: " << arr.Delete(0) << endl;
    arr.Display();

    return 0;
}
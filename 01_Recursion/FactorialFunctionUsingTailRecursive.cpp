#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// Factorial Function using Tail Recursive
int fact(int n, int ans = 1)
{
    if (n == 0)
    {
        return ans;
    }
    return fact(n - 1, ans * n);
}
int main()
{
    cout << fact(3);

    return 0;
}
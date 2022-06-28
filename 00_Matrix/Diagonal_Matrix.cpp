#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Matrix
{
    int A[10];

public:
    int n;
    //  Set Matrix:
    void setMatrix(int i, int j, int x)
    {
        if (i == j)
            A[i - 1] = x;
    }
    // get Matrix:
    int getMatrix(int i, int j)
    {
        if (i == j)
            return A[i - 1];
        else
            return 0;
    }

    void Display()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    cout << A[i - 1] << "   ";
                else
                {
                    cout << "0   ";
                }
            }
            cout << endl
                 << endl;
        }
    }
};

int main()
{
    Matrix m;
    m.n = 5;
    // m.setMatrix(0, 0, 3);
    // m.setMatrix(1, 1, 1);
    // m.setMatrix(2, 2, 8);
    // m.setMatrix(3, 3, 7);
    // m.setMatrix(4, 4, 5);
    // Taking the Values for the Matrix Automatically:
    // cout << "Enter 5 Values for the Matrix: " << endl;
    static int x = 5;
    for (int i = 0; i < m.n; i++)
    {
        // cin >> x;
        int y = x++;
        m.setMatrix(i, i, y);
    }

    m.Display();

    return 0;
}
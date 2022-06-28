/***********************************************************************************************************************************

Lower Triangular Matrix [Row-Major Mapping]:

************************************************************************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class LowerTriangularMatrix
{
    int *A;
    int n;

public:
    LowerTriangularMatrix()
    {
        n = 2;
        A = new int[2 * (2 + 1) / 2];
    }
    LowerTriangularMatrix(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~LowerTriangularMatrix()
    {
        delete[] A;
    }
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
};
void LowerTriangularMatrix::Set(int i, int j, int x)
{
    if (i >= j)
        A[(i * (i - 1)) / 2 + (j - 1)] = x;
}
int LowerTriangularMatrix::Get(int i, int j)
{
    if (i >= j)
        return A[(i * (i - 1)) / 2 + (j - 1)];
    else
        return 0;
}
void LowerTriangularMatrix::Display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                cout << A[((i * (i - 1)) / 2) + (j - 1)] << "  ";
            }
            else
                cout << 0 << "  ";
        }
        cout << endl;
    }
}

int main()
{
    // Dimensions [value of n]
    int d;
    cout << "Enter Dimension: ";
    cin >> d;

    // Declaring the Lower Triangular Matrix:
    LowerTriangularMatrix m(d);

    // Declaring a variable for taking input for the Matrix:
    int x;
    cout << "Enter All Elements: ";
    // Loop for the Initialization of the Elements:
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin >> x;
            m.Set(i, j, x);
        }
    }

    // Displaying the Matrix:
    m.Display();

    return 0;
}
/***********************************************************************************************************************************

Accessing the Lower Triangular Matrix [Row-Major Mapping]:
Array A:
  0      1     2     3     4     5     6     7     8    9     10    11    12    13    14
_________________________________________________________________________________________
|     |     |     |     |     |     |     |     |     |    |     |     |     |     |     |
| a11 | a21 | a22 | a31 | a32 | a33 | a41 | a42 | a43 |a44 | a51 |a52  | a53 | a54 | a55 |
|_____|_____|_____|_____|_____|_____|_____|_____|_____|____|_____|_____|_____|_____|_____|
|row 1|   row 2   |     row 3       |      row 4           |         row 5               |
|     |           |                 |                      |                             |
To accessing the Rows:
Index(A[4][3]) = [1 + 2 + 3] + 2 = 8
Index(A[5][4]) = [1 + 2 + 3 + 4] + 3 = 13
Index(A[i][j]) = [i *(i - 1) / 2] + j - 1;

-------------------------------------------------------------------------------------------------------------------------------------
Input:
5
1 0 0 0 0 1 2 0 0 0 1 2 3 0 0 1 2 3 4 0 1 2 3 4 5

Output:
1  0  0  0  0
1  2  0  0  0
1  2  3  0  0
1  2  3  4  0
1  2  3  4  5

************************************************************************************************************************************/

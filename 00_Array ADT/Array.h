#include <iostream>
using namespace std;
template <class T>
class Array
{
    T *A;
    int length;
    int size;

public:
    // Array class Constructors:
    Array()
    {
        A = new T[10];
        length = 0;
        size = 10;
    }
    Array(int sz, int l = 0)
    {
        size = sz;
        length = l;
        A = new T[size];
    }
    ~Array()
    {
        delete[] A;
    }
    // Array class Functions:
    // Set the Array Elements:
    void setArrayEl(int a[])
    {
        A = a;
    }
    void Display();
    void Insert(int index, T x);
    T Delete(int index);
    bool isSorted();
    void swap(T a, T b);

    // External Function:
    void reverseMethod1();
    void reverseMethod2();
    void leftShift();
    void leftRotate();
    void rightShift();
    void rightRotate();
};
template <class T>
void Array<T>::Display()
{
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << "   ";
    }
    cout << endl;
}
template <class T>
void Array<T>::Insert(int index, T x)
{
    if (index >= 0 && index <= length)
    {
        for (int i = length - 1; i >= index; i--)
        {
            A[i + 1] = A[i];
        }
        A[index] = x;
        length++;
    }
}
template <class T>
T Array<T>::Delete(int index)
{
    int x = 0;
    if (index >= 0 && index < length)
    {
        x = A[index];
        for (int i = 0; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
    }
    return x;
}
// Swap Function:
template <class T>
void Array<T>::swap(T a, T b)
{
    T temp = a;
    a = b;
    b = temp;
}

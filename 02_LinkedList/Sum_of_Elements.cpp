/***********************************************************************************************************************************
 *
 *   Sum of all the Elements of Linked List:
 *
 ***********************************************************************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// Node:
struct Node
{
    int data;
    Node *next;
} *head = nullptr;

// Creating a function which automatically create an Linked List form an Array:
void create(int a[], int size)
{
    Node *t, *last;
    head = new Node;
    head->data = a[0];
    head->next = nullptr;
    last = head;
    // Looping through the Array Elements and Assigning a  new Array:
    for (int i = 1; i < size; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}
// Sum function:
int sum(Node *p)
{
    int sum = 0;
    while (p)
    {
        cout << p->data << "    ";
        sum += p->data;
        p = p->next;
    }
    cout << endl;
    return sum;
}

int main()
{
    int arr[] = {1, 4, 2, 3, 5};

    create(arr, 5);
    printf("The sum of the Elements of the Node is %d \n", sum(head));

    return 0;
}
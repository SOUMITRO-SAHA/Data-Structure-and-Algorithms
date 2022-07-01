/***********************************************************************************************************************************
 *
 *   Circular Linked List:
 *
 ***********************************************************************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
#include "Node.h"
using namespace std;
// Circular LL Create Function:
void cCreate(int a[], int size)
{
    Node *t;
    head = new Node;
    head->data = a[0];
    head->next = head;
    tail = head;
    for (int i = 1; i < size; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = tail->next;
        tail->next = t;
        tail = t;
    }
}
// Circular LL Display Function:
void cDisplay(Node *p)
{
    do
    {
        cout << p->data << "  ";
        p = p->next;

    } while (p != head);
}

int main()
{
    int arr[] = {2, 6, 9, 13, 15};
    int sz = sizeof(arr) / sizeof(arr[0]);
    cCreate(arr, sz);
    cDisplay(head);

    return 0;
}
/***********************************************************************************************************************************
 *Displaying Linked List:
 *
 ***********************************************************************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
} *head = nullptr;
void createNode(int a[], int n)
{
    int i;
    Node *t, *tail;
    head = new Node;
    head->data = a[0];
    head->next = nullptr;
    tail = head;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = nullptr;
        tail->next = t;
        tail = t;
    }
}
void Display(Node *p)
{
    while (p != nullptr)
    {
        cout << p->data << "    ";
        p = p->next;
    }
}
// Display using Recursive Function:
void rDisplay(Node *p)
{
    cout << p->data << "  ";
    rDisplay(p->next);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    createNode(arr, 5);
    // Display(head);
    rDisplay(head);

    return 0;
}
/***********************************************************************************************************************************
 *
 *   checking For a Loop in a Linked List:
 *
 ***********************************************************************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
} *head = nullptr, *tail = nullptr;
void Display(Node *p)
{
    while (p)
    {
        cout << p->data << "  ";
        p = p->next;
    }
    cout << endl;
}
void Create(int a[], int s)
{
    Node *t;
    head = new Node;
    head->data = a[0];
    head->next = nullptr;
    tail = head;
    for (int i = 1; i < s; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = nullptr;
        tail->next = t;
        tail = t;
    }
}
int isLooped(Node *f)
{
    Node *p, *q;
    p = q = f;
    do
    {
        p = p->next;
        q = q->next;
        q = q ? q->next : q;
    } while (p && q && p != q);
    if (p == q)
        return 1;
    else
        return 0;
}

int main()
{
    int arr[] = {3, 5, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    Create(arr, size);
    Display(head);
    Node *t1, *t2;
    t1 = head->next->next;
    t2 = head->next->next->next->next;
    t2->next = t1;

    // Calling isLooped():
    cout << "Is Loop: " << isLooped(head) << endl;

    return 0;
}
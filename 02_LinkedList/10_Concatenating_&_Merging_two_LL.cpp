/***********************************************************************************************************************************
 *   Merging of two Linked List:
 *  Todo : It is not possible if we use Class. It got into Infinite Loop. So I am gonna use Struct:
 *! Work Pending on Class based Object:
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
} *first = nullptr, *second = nullptr, *third = nullptr;
// creating Linked List from and Array:
void create(int a[], int sz)
{
    Node *t, *tail = nullptr;
    first = new Node;
    first->data = a[0];
    first->next = nullptr;
    tail = first;
    for (int i = 1; i < sz; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = nullptr;
        tail->next = t;
        tail = t;
    }
}
void create1(int a[], int sz)
{
    Node *t, *tail = nullptr;
    second = new Node;
    second->data = a[0];
    second->next = nullptr;
    tail = second;
    for (int i = 1; i < sz; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = nullptr;
        tail->next = t;
        tail = t;
    }
}

// Display Function:
void Display(Node *p)
{
    while (p)
    {
        cout << p->data << "  ";
        p = p->next;
    }
    cout << endl;
}
// Function for Contatenation two LL:
void concat(Node *a, Node *b)
{
    third = a;
    while (a->next)
    {
        a = a->next;
    }
    a->next = b;
}

// Function For Merging Two LL:
void merge(Node *f, Node *s)
{
    Node *l;
    if (f->data < s->data)
    {
        third = l = f;
        f = f->next;
        third->next = nullptr;
    }
    else
    {
        third = l = s;
        s = s->next;
        third->next = nullptr;
    }
    while (f && s)
    {
        if (f->data < s->data)
        {
            l->next = f;
            l = f;
            f = f->next;
            l->next = nullptr;
        }
        else
        {
            l->next = s;
            l = s;
            s = s->next;
            l->next = nullptr;
        }
    }
    if (f)
        l->next = f;
    else
        l->next = s;
}
int main()
{
    int a1[] = {1, 2, 3, 40, 50};
    int a2[] = {10, 30, 47};

    create(a1, 5);
    create1(a2, 3);

    // Display(first);
    // Display(second);
    // concat(first, second);
    merge(first, second);
    Display(third);

    return 0;
}
/***********************************************************************************************************************************
 *
 *Merging is a process of Combining two sorted Linked List into a single sorted Linked List:
 *
 ***********************************************************************************************************************************/
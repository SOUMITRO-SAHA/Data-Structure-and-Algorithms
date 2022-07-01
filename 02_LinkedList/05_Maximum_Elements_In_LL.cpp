/***********************************************************************************************************************************
 *
 * Find the Maximum Elements in the Linked List:
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
void create(int a[], int n)
{
    Node *t, *last;
    head = new Node;
    head->data = a[0];
    head->next = nullptr;
    last = head;
    // For loop:
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}
void maxElementInLL(Node *p)
{
    int max = INT_MIN;
    while (p)
    {
        if (max < p->data)
        {
            max = p->data;
        }
        p = p->next;
    }
    cout << "The Max Element is " << max << endl;
}

int main()
{
    int a[] = {-33, -70, -2, 1, 4, 8};
    int size = sizeof(a) / sizeof(a[0]);

    create(a, size);
    maxElementInLL(head);

    return 0;
}
/***********************************************************************************************************************************
** Working Fine
*
***********************************************************************************************************************************/
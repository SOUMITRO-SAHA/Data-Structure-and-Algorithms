/***********************************************************************************************************************************
 *
 *! Inserting a Node into the Linked List:[At 0'th Index, as well as at any index]
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
void createNode(int a[], int n)
{
    int i;
    Node *t;
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
    cout << endl
         << endl;
}
//! Insert Function:
void insert(Node *q, int idx, int v)
{
    Node *t, *p;
    t = new Node;
    t->data = v;
    t->next = nullptr;
    if (idx == 0)
    {
        t->next = head;
        head = t;
    }
    for (int i = 0; i < idx; i++)
    {
        p = q;
        q = q->next;
    }
    p->next = t;
    t->next = q;
}
// For Inserting a Node at the End:
void InsertEnd(int v)
{
    Node *n = new Node;
    n->data = v;
    n->next = nullptr;
    tail->next = n;
    tail = n;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);

    createNode(a, size);
    Display(head);

    // Calling Insert Function:
    // int index, value;
    // cout << "Enter the index: ";
    // cin >> index;
    // cout << endl;
    // cout << "Enter the Value: ";
    // cin >> value;
    // insert(head, index, value);

    // Insert at End:
    int value = 6;
    InsertEnd(value);
    InsertEnd(7);
    Display(head);

    return 0;
}
/***********************************************************************************************************************************
 *
 * Time Complexity of Insertion function at 0'th Index is O(1).
 * The Time Complexity of the Insertion function at n'th Index is O(n).
 * -------------------------------------------------------------------------------------------
 * To Improve the Insertion at last index we should maintain a last index. So, the Time Complexity will become O(1) As well:
 *
 ***********************************************************************************************************************************/

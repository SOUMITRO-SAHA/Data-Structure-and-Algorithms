/***********************************************************************************************************************************
 *
 *! Search of an Element in the Linked List:
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
    Node *t, *tail;
    head = new Node;
    head->data = a[0];
    head->next = nullptr;
    tail = head;
    for (int i = 1; i < n; i++)
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
    while (p != nullptr)
    {
        cout << p->data << "    ";
        p = p->next;
    }
    cout << endl
         << endl;
}
void searchEl(Node *p, int key)
{
    static int i = 0;
    while (p)
    {
        if (key == p->data)
        {
            printf("The %d{key} found at %d{Index}\n\n", key, i);
        }
        p = p->next;
        i++;
    }
}
// Improving Linear Search:
int impLinearSearch(Node *p, int key)
{
    Node *q = nullptr;
    int i = 0;
    while (p)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = head;
            head = p;
            return i;
        }
        q = p;
        p = p->next;
        i++;
    }
    return 0;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 9};
    int s = sizeof(a) / sizeof(a[0]);
    int key;
    cout << "Enter the Key: ";
    cin >> key;
    create(a, s);
    Display(head);
    // searchEl(head, key);
    cout << "The Key " << key << " is found at " << impLinearSearch(head, key) << endl
         << endl;
    impLinearSearch(head, 9);
    Display(head);

    return 0;
}
/***********************************************************************************************************************************
 * [Note:]
 * There are two ways to search an element in an Array:
 *      1. Linear Search
 *      2. Binary Search
 *
 * But, in Linked List We can Only Use :
 *      1. Linear Search
 * -----------------------------------------------------------------
 * As We all know, To Improve Linear Search we can use Transposition or More to the Head:
 * In case of LL, We avoid using Transposition.
 * So, We are gonna use More to the Head Method:
 *
 ** Working Fine:
 *
 ***********************************************************************************************************************************/
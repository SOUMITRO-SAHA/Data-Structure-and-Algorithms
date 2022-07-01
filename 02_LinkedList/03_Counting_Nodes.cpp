/***********************************************************************************************************************************
 *
 *   Counting Nodes of Link List:
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
// Creating Node:
void createNode(int a[], int n)
{
    Node *temp, *last;
    head = new Node;
    head->data = a[0];
    head->next = nullptr;
    last = head;
    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = a[i];
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
}
// Display Data of Linked List:
void DisplayLL(Node *p)
{
    static int count = 0;
    while (p != nullptr)
    {
        cout << p->data << "  ";
        count++;
        p = p->next;
    }
    cout << endl
         << "Total Number of Nodes are " << count << endl;
}

int main()
{
    int arr[] = {11, 22, 33, 44, 55};
    int size = sizeof(arr) / sizeof(arr[0]);
    createNode(arr, size);
    DisplayLL(head);

    return 0;
}
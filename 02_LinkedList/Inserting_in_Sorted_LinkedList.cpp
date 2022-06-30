/***********************************************************************************************************************************
 *
 *   Inserting a Node in a Sorted Linked List:
 *
 ***********************************************************************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
// Including the Header File of LL class:
#include "LinkedList_Using_Class.h"
using namespace std;
void LinkedList::InsertSortedPlace(int value)
{
    Node *h = head, *temp = nullptr;
    Node *n = new Node;
    n->data = value;
    n->next = nullptr;
    int len = Length();
    for (int i = 0; i < len; i++)
    {
        if (value > tail->data)
        {
            tail->next = n;
            tail = n;
            return;
        }
        else if (value < head->data)
        {
            n->next = head;
            head = n;
            return;
        }
        else if (value > h->data)
        {
            temp = h;
            h = h->next;
        }
        else
        {
            break;
        }
    }
    n->next = temp->next;
    temp->next = n;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int sz = sizeof(arr) / sizeof(arr[0]);

    LinkedList l(arr, sz);

    l.Display();
    cout << "1: " << endl;
    // Calling the InsertSortedPlace Function:
    // l.InsertSortedPlace(9);
    // l.Display();
    // ________________________________________________ //
    cout << "2: " << endl;
    l.InsertSortedPlace(13);
    l.Display();

    // ________________________________________________ //
    // cout << "3: " << endl;
    // l.InsertSortedPlace(35);
    // l.Display();

    /*
    // Calling Display Function:
    l.Display();

    // Calling Length:
    cout << "Length 1 : " << l.Length() << endl
         << endl;

    // ___________________________________________________________________ //
    // Calling Delete:
    cout << l.Delete(3) << endl;
    // Calling Display Function:
    l.Display();
    // Calling Length:
    cout << "Length 2 : " << l.Length() << endl
         << endl;

    // ___________________________________________________________________ //
    // Calling Insert:
    l.Insert(5, 40);
    // Calling Display Function:
    l.Display();
    // Calling Length:
    cout << "Length 3 : " << l.Length() << endl
         << endl;
    */

    return 0;
}
/***********************************************************************************************************************************
 *
 *   checking For a Loop in a Linked List:
 *
 ***********************************************************************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
#include "LinkedList_Using_Class.h"
using namespace std;
int LinkedList::isLoopedList()
{
    Node *p, *q;
    p = q = head;
    cout << endl
         << "Start: " << endl;
    // Todo: This is not Working The Loop is fall into infinite Loop:
    do
    {
        p = q;
        q = q->next;
        q = q ? q->next : q;
    } while (p && q && p != q);
    cout << "End: " << endl;
    if (p == q)
        return 1;
    else
        return 0;
}

int main()
{
    int arr[] = {3, 5, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    LinkedList l(arr, size);
    l.Display();
    // TODO: This is not Working:
    //  Node *t1, *t2;
    //  t1 = l.head->next->next;
    //  t2 = l.head->next->next->next->next;
    //  t2->next = t1;

    // l.Display();
    cout << "Is Loop: " << l.isLoopedList() << endl;

    return 0;
}
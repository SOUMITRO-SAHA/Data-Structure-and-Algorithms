/***********************************************************************************************************************************
 *
 * !  Linked List: Node[self-Referential Structure]
 *
 ***********************************************************************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Node:
struct Node
{
    int data;
    Node *next; // This kind of struct is called self-Referential Structure:
};

int main()
{
    Node *p;
    p = new Node;
    p->data = 10;
    p->next = 0; //[or 'nullptr' instead of '0']

    // Printing the values of The First Node:
    cout << p->data << endl
         << p->next << endl;

    return 0;
}
/***********************************************************************************************************************************
 * Here, the pointer p is also called "Head".
 *
 ***********************************************************************************************************************************/
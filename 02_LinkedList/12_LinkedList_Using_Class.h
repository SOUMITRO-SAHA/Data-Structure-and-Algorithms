/***********************************************************************************************************************************
 *
 *   Linked List Header File Using Class:
 *
 ***********************************************************************************************************************************/
using namespace std;
// Node Using Class:
class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *head;
    Node *tail;

    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }
    LinkedList(int a[], int n)
    {
        Node *t;
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
    ~LinkedList()
    {
        Node *d = head;
        while (head)
        {
            head = head->next;
            delete d;
            d = head;
        }
    }

    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    int Length();
    void InsertSortedPlace(int value);
    int isLoopedList();
    void concat(LinkedList a);
};
void LinkedList::Display()
{
    Node *p = head;
    while (p)
    {
        cout << p->data << "    ";
        p = p->next;
    }
    cout << endl;
}
int LinkedList::Length()
{
    Node *p = head;
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}
int LinkedList::Delete(int index)
{
    Node *p, *q = nullptr;
    int x = -1;
    if (index < 1 || index > Length())
    {
        return -1;
    }
    if (index == 0)
    {
        p = head;
        head = head->next;
        x = p->data;
        delete p;
    }
    else
    {
        p = head;
        for (int i = 0; i < index; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
    return x;
}
void LinkedList::Insert(int index, int value)
{
    Node *p = head, *q = nullptr;
    Node *n = new Node;
    n->data = value;
    n->next = nullptr;
    if (index < 0 || index > Length())
        return;
    if (index == 0)
    {
        n->next = head;
        head = n;
        return;
    }
    if (index == Length())
    {
        tail->next = n;
        tail = n;
        return;
    }
    for (int i = 0; i < index; i++)
    {
        q = p;
        p = p->next;
    }
    q->next = n;
    n->next = p;
}
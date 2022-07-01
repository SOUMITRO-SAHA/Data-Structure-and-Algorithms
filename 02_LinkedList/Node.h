using namespace std;
struct Node
{
    int data;
    Node *next;
} *head = nullptr, *tail = nullptr;
// Create Function:
void Create(int a[], int size)
{
    Node *t;
    head = new Node;
    head->data = a[0];
    head->next = nullptr;
    tail = head;
    for (int i = 1; i < size; i++)
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

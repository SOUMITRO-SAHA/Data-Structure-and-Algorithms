//Creating a Node Class for Stack using Templates [Linked List]
using namespace std;
template <typename T>
class Node{
    public:
    T data;
    Node<T> *next;

    Node(T data){
        this -> data = data;
        next = NULL;
    }
};

//Class for Stack
template <typename T>
class stack{
    Node<T> *head;
    int size; //Number of elements present in Stack
    public:
        stack(){
            head = nullptr;
            size = 0;
        }
        // To get the Size of the Stack [Means, How many elements are in there]
        int getSize(){
            return size;
        }
        //To check Whether there are any element present or not
        bool isEmpty(){
            // 0 == False , 1 = True;
            return size == 0;
        }
        //For Insert a value into the Stack
        void push(T elements)
        {
            Node<T> *newNode = new Node<T>(elements);
            newNode->next = head; 
            head = newNode;
            size++;
        }
        T pop(){
            if (isEmpty())
            {
                return 0;
            }
            
            T hData = head->data;
            Node<T> *tmp = head;
            head = head->next;
            delete tmp;
            size--;
            return hData;
        }
        T top(){
            if (isEmpty())
            {
                return 0;
            }
            return head->data;
        }

};
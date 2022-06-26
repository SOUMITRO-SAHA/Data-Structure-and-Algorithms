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
//Class for Queue using Linked List:
template <typename T>
class QueueUsingLL{
    Node<T> *head;
    Node<T> *tail;
    int size;
    public:
        //General Constructure for the Class
        QueueUsingLL(){
            head = NULL;
            tail = NULL;
            size = 0;
        }

        //Size of the Queue
        int getSize(){ return size;}
        // Checking is it empty or not
        bool empty(){
            return size==0;
        }
        // Front element
        T front(){
            if (empty())
            {
                return 0;
            }
            
            return head->data;
        }
        //Inserting an element
        void push(T element){
            Node<T> *newNode = new Node<T>(element);
            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
            size++;
        }
        //Deleting an element
        void pop(){
            if (empty())
            {
                return;
            }
            Node<T> *temp = head;
            head = head->next; 
            delete []temp;
            size--;
        }

};
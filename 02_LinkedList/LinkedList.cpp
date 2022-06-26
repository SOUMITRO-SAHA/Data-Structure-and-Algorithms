#include <iostream>

using namespace std;

#include "NodeForLinkedList.cpp"

//Printing Function for a Linked List.
void print(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

//Function for Inserting a Node
Node *push(Node *head, int i, int data){
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    //Condition for Insertion the Node at the beginning of the Linked List
    if (i == 0)
    {
        newNode ->next = head;
        head = newNode;
        return head;
    }
    

    //Counter for the i-1 pointer.
    while (temp != NULL && count < i-1)
    {
        temp = temp ->next;
        count++;
    }
    //Insertion the Value into i'th position
    if (temp != NULL)
    {
        Node *a = temp ->next;
        temp ->next = newNode;
        newNode ->next = a;
    }
    return head;
}

//Function for Deleting a Node
Node *deleteNode(Node *head, int i){
    Node *temp = head;
    int count = 0;
    //Condition for deletion a Node at the beginning of the Linked List.
    if(i==0){
        // Node *temp = head;
        head = head->next;
        delete[] temp;
        return head;
    }
    //Counter for i-1 position.
    while(temp != NULL && count < i-1){
        temp = temp->next;
        
        count ++;
    }
    //Condition for Deletion at ith position.
    if (temp != NULL)
    {
        Node *a = temp->next;
        temp->next = a->next;
        delete []a;
    }

    return head;
}
// Deletion a Node which has a key as input
//[ Not Ready]
// Node *deleteNodeByKey(Node *head, int key){
//     int count = 0;
//     Node *temp = head;
//     //First incident
//     while (temp->data != key && temp != NULL)
//     {
//         temp = temp->next;
//         count++;
//     }
//     //Conditions
//     if (temp->data == key)
//     {
//         temp --;
//         Node *a = temp;
//         temp = a->next;
//         delete[] a;
//     }
//     return head;
// }

//Taking User Input for Linked List
//Input 1 [Making it easier to take input lets set -1 for stop the input]
Node* takeInput(){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    Node *head = nullptr;
    while (data != -1)
    {
        Node *nNode = new Node(data);
        if (head == nullptr)
        {
            head = nNode;
        }else{
            Node *temp = head;
            while (temp->next !=nullptr)
            {
                temp = temp->next;
            }
            temp -> next = nNode;
        }
        cin >>data;
        
    }
    return head;
    
}

int main(){
    //! *********** Automatically taking User input ***********
    Node *head = takeInput();
    print(head);
/*
    //[Working Fine]
    //Taking User Input for Push Function
    cout<<"Enter the i, and data:";
    int i, data;
    //Calling Push Function
    cin>>i>>data;
    head = push(head,i,data);
    print(head);
*/

    //Taking User Input for delete the Node;
    cout<<"Enter the key :";
    int key, data;
    cin>>key;

    //Calling Delete Function
    // head = deleteNode(head,i);
    //Calling Delete Function having a key
    head = deleteNodeByKey(head,key);
    print(head);

    //! ########### Manually Taking User Input ##############
/*
    //?Statically
    Node n1(1);
    //!Storing the address of head into *head variable. 
    Node *head = &n1;

    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    print(head);
    //?Dynamically
    Node *n6 = new Node(10);
    Node *head2 = n6;

    Node *n7 = new Node(20);
    n6 -> next = n7;
    print(head2);
*/

}

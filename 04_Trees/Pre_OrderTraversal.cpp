#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//Creating a Node Class for Tree.
class Node{
    public:
    int data;
    Node *left;
    Node *right;
};
//
struct Node* createNode(int data){
    struct Node *n;//Creating a node pointer
    n = new Node();//Allocating memory in the heap
    n->data = data;//Setting the data
    n->left = NULL;//Setting the left and right children to NULL
    n->right = NULL;//Setting the left and right children to NULL
    return n;//Finally returning the created node.
}
void preOrder(Node *root){
    if (root != NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
    
}

int main(){
    //Constructing the root Node - using Function (Recommended)
    struct Node *root = createNode(4);
    struct Node *n1 = createNode(1);
    struct Node *n2 = createNode(6);
    struct Node *n3 = createNode(5);
    struct Node *n4 = createNode(2);
    /*
    *Finally the tree looks like this:
        4
       / \
      1   6
     / \
    5   2 
    */
   //Linking the root node with left and right children
   root->left = n1;
   root->right = n2;
   n1->left = n3;
   n1->right = n4;

    preOrder(root);
    return 0;
}
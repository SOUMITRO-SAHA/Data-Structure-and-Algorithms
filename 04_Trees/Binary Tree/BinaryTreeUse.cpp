#include <bits/stdc++.h>
#include <iostream>
#include "BinaryTreeClass.h"
using namespace std;

//Creating Print Tree Function
void printTree(BinaryTreeNode<int>* root){
    if (root == NULL)
    {
        return;
    }
    
    cout<<root->data<<":";
    if (root->left != NULL)
    {
        cout<<"L"<<root->left->data<<" ";
    }
    if (root->right != NULL)
    {
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}
/*
//Binary Tree Take input Function
//Very Painfull Method to take Input.
//TODO: Creat a Better method [level Wise]
BinaryTreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter Data"<<": ";
    cin>>rootData;
    cout<<endl;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = takeInput();
    BinaryTreeNode<int> *rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;

    return root;
    
}
*/
//Taking Input Levelwise
BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root Data"<<endl;
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*> pendingNode;
    pendingNode.push(root);
    while (pendingNode.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNode.front();
        pendingNode.pop();
        cout<<"Enter left Child of "<<front->data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if (leftChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNode.push(child);
        }
        cout<<"Enter right Child of "<<front->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if (rightChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNode.push(child);
        }
        
    }
    return root;
    
}
/*
TODO:   Not Working.
//Printing LevelWise
void printTreeLevelWise(BinaryTreeNode<int> *root){
    if (root == NULL)
    {
        return;
    }
    queue<BinaryTreeNode<int>*> pendingNode;
    pendingNode.push(root);
    while (pendingNode.size() != 0){
        BinaryTreeNode<int> *front = pendingNode.front();
        pendingNode.pop();
        cout<<root->data<<":";
        if (root->left != NULL)
        {
            front->left = root->left;
            cout<<"L"<<root->left->data<<" ";
            pendingNode.push(front->left);
        }
        if (root->right != NULL)
        {
            front->right = root->right;
            cout<<"R"<<root->right->data;
            pendingNode.push(front->right);
        }
        cout<<endl;
        printTree(root->left);
        printTree(root->right);
            
        }
    
}
*/

int main(){
    /*
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
    root->left = node1;
    root->right = node2;
    */

   //Demo1: 1 2 -1 -1 3 -1 -1
   //Demo2: 1 2 4 -1 -1 5 6 -1 -1 7 -1 -1 3 8 -1 -1 -1
    // BinaryTreeNode<int> *root = takeInput();
    BinaryTreeNode<int> *root = takeInputLevelWise();
    //Demo3 : 1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 -1 -1 -1 -1 -1 -1
    /*
    Task to Print:
                  1
                /   \
               /     \
              2        3
             / \     /   \
            4   5   10    11
               / \       /  \
              6   7    100   200
    */
    printTree(root);
    cout<<"Level Wise"<<endl;
    printTreeLevelWise(root);

    delete root;


    return 0;
}
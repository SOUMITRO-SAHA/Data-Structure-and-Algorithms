#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include "TreeNodeClass.h"

using namespace std;

//Taking User input level Wise
TreeNode<int> *takeInputLevelWise(){
    int rootdata;
    cout<<"Enter root data"<<endl;
    cin>>rootdata;
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter no. of Children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout<<"Enter "<<i<<" 'th child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
        
    }
    return root;
    
}

//Taking User input for the Tree:
TreeNode<int> *takeInput(){
    int rootData;
    cout<<"Enter Data:"<<endl;
    cin>>rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    //Taking input for the no. of child.
    int n;
    cout<<"Enter the No. of Child of "<<rootData<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}
//Print a tree
void printTree(TreeNode<int> *root){
    if (root == NULL)
    {
        return;
    }
    
    cout<<root->data<<":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout<<root->children[i]->data<<", ";
    }
    cout<<endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
    
}
// Printing a Tree level wise
// void printTreeLevelWise(TreeNode<int> *root){
    
// }

//Number of Nodes:
int numNodes(TreeNode<int> *root){
    int ans = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += numNodes(root->children[i]);
    }
    return ans;
}
//Height of the Nodes:
//TODO: Not Working.
int heightNodes(TreeNode<int> *root){
    int height = 0;
    if (root == NULL){
        return 0;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        heightNodes(root->children[i]);
        height++;
        
    }
    return height;
}
//Depth of level of the Nodes:
void printAtLevelK(TreeNode<int> *root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        printAtLevelK(root->children[i],k-1);
    }
    
}

//* Input: 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
int main(){
/*
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *node1 = new TreeNode<int>(10);
    TreeNode<int> *node2 = new TreeNode<int>(20);
    root->children.push_back(node1);
    root->children.push_back(node2);
*/
    //******* [Working Fine] ********
    // TreeNode<int> *root = takeInput(); //Method - 1: Complicated One.
    TreeNode<int> *root = takeInputLevelWise(); //Method - 2: good One.
    //Calling the printTree function to print the tree
    printTree(root);

    //Number of Nodes
    int nNode = numNodes(root);
    cout<<"No. Nodes: "<<nNode<<endl;
    //Height of the Nodes:
    int height = heightNodes(root);
    cout<<"H: "<<height<<endl;
    //Depth of the Nodes:
    printAtLevelK(root,2);
    
    //TODO: Delete the tree.
    return 0;
}
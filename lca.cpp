#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef struct node
{
    struct node *left, *right;
    int data;
}node;
 
// Utility function to create a new tree Node
node* newNode(int key)
{
    node *temp = new node;
    temp->data= key;
    temp->left = temp->right = NULL;
    return temp;
}

int findLCA(node* root,int a,int b)
{
if(root!=NULL)
{
if((root->left->data==a||root->right->data==b)||(root->left->data==b||root->right->data==a))
return root->data;
if(findLCA(root->left,a,b)!=-1)
return root->left->data;
else if (findLCA(root->right,a,b)!=-1)
return root->right->data;
else if((findLCA(root->left,a,a)!=-1&&findLCA(root->right,b,b)!=-1)||(findLCA(root->left,b,b)!=-1&&findLCA(root->right,a,a)!=-1))
return root->data;
}
else
return -1;
}






int main()
{
    // Let us create binary tree given in the above example
    node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    cout << "LCA(4, 5) = " << findLCA(root, 4, 5);
    cout << "nLCA(4, 6) = " << findLCA(root, 4, 6);
    cout << "nLCA(3, 4) = " << findLCA(root, 3, 4);
    cout << "nLCA(2, 4) = " << findLCA(root, 2, 4);
    return 0;
}

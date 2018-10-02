#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef struct node
{
int data;
struct node* right;
struct node* left;
}node;

node* newNode(int data)
{
node* temp=new node;
temp->data=data;
temp->right=temp->left=NULL;
return (temp);
}

node* findLCA(node* root,int a,int b)
{
//find the left and right lca
if(root==NULL)
return root;

if(root->data==a||root->data==b)
return (root);

node* leftlca=findLCA(root->left,a ,b);

node* rightlca=findLCA(root->right,a ,b);

if((leftlca)&&(rightlca))
return root;

return (leftlca!=NULL)?leftlca:rightlca;
}

int main()
{
    // Let us create binary tree given in the above example
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    cout << "LCA(4, 5) = " << findLCA(root, 4, 5)->data;
    cout << "nLCA(4, 6) = " << findLCA(root, 4, 6)->data;
    cout << "nLCA(3, 4) = " << findLCA(root, 3, 4)->data;
    cout << "nLCA(2, 4) = " << findLCA(root, 2, 4)->data;
    return 0;
}



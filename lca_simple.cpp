#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class node
{
int data;
node* right;
node* left;
public:
node(int data)
{
this->data=data;
this->left=this->right=NULL;
}
int findLCA(int a,int b);
bool findpath(int a,vector<int> path);
};

int main()
{
    // Let us create the Binary Tree shown in above diagram.
    Node * root = newNode(1);
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

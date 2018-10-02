#include<iostream>
#include<bits/stdc++.h>

using namespace std;
typedef struct node
{
int data;
struct node* left;
struct node* right;
int vcover;
}

int main()
{
    // Let us construct the tree given in the above diagram
    struct node *root         = newNode(20);
    root->left                = newNode(8);
    root->left->left          = newNode(4);
    root->left->right         = newNode(12);
    root->left->right->left   = newNode(10);
    root->left->right->right  = newNode(14);
    root->right               = newNode(22);
    root->right->right        = newNode(25);
 
    printf ("Size of the smallest vertex cover is %d ", vCover(root));
 
    return 0;
}


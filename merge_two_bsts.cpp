#include<stdio.h>
#include<stdlib.h>
 
// Structure of a BST Node
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int main()
{
    struct node  *root1 = NULL, *root2 = NULL;
 
    /* Let us create the following tree as first tree
            3
          /  \
         1    5
     */
    root1 = newNode(3);
    root1->left = newNode(1);
    root1->right = newNode(5);
 
    /* Let us create the following tree as second tree
            4
          /  \
         2    6
     */
    root2 = newNode(4);
    root2->left = newNode(2);
    root2->right = newNode(6);
 
    // Print sorted nodes of both trees
    merge(root1, root2);
 
    return 0;
}

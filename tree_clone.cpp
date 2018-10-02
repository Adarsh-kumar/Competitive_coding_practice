#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
int data;
struct node* left;
struct node* right;
struct node* random;
}node;

node* newNode(int data)
{
node* temp=new node();
temp->data=data;
temp->left=temp->right=temp->random=NULL;
return temp;
}



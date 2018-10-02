#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
int data;
struct node* left;
struct node* right;
}node;

node* newNode(int data)
{
node* temp=new node();
temp->data=data;
temp->left=temp->right=NULL;
return temp;
}

int find_height(node* tree)
{
int lheight=0;
int rheight=0;

if(tree!=NULL)
{
return(max(find_height(tree->left)+1,find_height(tree->right)+1));
}
else
return 0;
}

int find_max_width(node* root)
{
int size=0;
queue<node*> q;
q.push(root);

while(!q.empty())
{
int count=q.size();

size=max(size,count);


while(count--)
{

node* current=q.front();
q.pop();

if(current->left!=NULL)
q.push(current->left);
if(current->right!=NULL)
q.push(current->right);
}
}

return size;
}




int find_diameter(node* root)
{
//max of the dia of left ,max of dia of right ,max of height of left +right +1
if(root!=NULL)
{
int lheight=find_height(root->left);
int rheight=find_height(root->right);

int ldia=find_diameter(root->left);
int rdia=find_diameter(root->right);

return (max(lheight+rheight+1,max(ldia,rdia)));
}
else
return 0;
}

void inorder_with_recursion(node* root)
{
if(root!=NULL)
{
inorder_with_recursion(root->left);
cout<<root->data<<" ";
inorder_with_recursion(root->right);
}
}

void print_node_at_k_distance(node* root,int k)
{
if(root!=NULL)
{
if(k==0)
cout<<root->data<<" ";
else
{
print_node_at_k_distance(root->left,k-1);
print_node_at_k_distance(root->right,k-1);
}
}
}

bool print_the_ancestors(node* root,int key)
{
if(root==NULL)
return 0;

if(root->data==key)
{
return 1;
}

else if(print_the_ancestors(root->left,key)||print_the_ancestors(root->right,key))
{
cout<<root->data<<" ";
return 1;
}

}


int main()
{
 
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
  root->right->right = newNode(8);
  root->right->right->left  = newNode(6);
  root->right->right->right  = newNode(7);
	//cout<<find_max_width(root);
//print_node_at_k_distance(root,3);
print_the_ancestors(root,7);

  //inorder_with_recursion(root);
  return 0;
}



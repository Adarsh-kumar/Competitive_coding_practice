#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
char data;
int freq;
struct node* right;
struct node* left;
node(char c,int a)
{
this->left=this->right=NULL;
this->data=c;
this->freq=a;
}
}node;

struct compare {
 
    bool operator()(node* l, node* r)
 
    {
        return (l->freq > r->freq);
    }
};
 

node* build_the_huffman_tree(char c[],int freq[],int n)
{
priority_queue<node* ,vector<node*> ,compare> pq;

for(int i=0;i<n;i++)
pq.push(new node(c[i],freq[i]) );

node* top;
node* right;
node* left;

while(pq.size()!=1)
{
left=pq.top();
pq.pop();
right=pq.top();
pq.pop();

top=new node('$',left->freq+right->freq) ;
top->left=left;
top->right=right;

pq.push(top);
}

return(top);
}

void print_the_code(node* root,string s)
{
if(root==NULL)
return ;

if(root->data!='$')
cout<<root->data<<" "<<root->freq<<" "<<s<<endl;

print_the_code(root->left,s+"0");
print_the_code(root->right,s+"1");

}



int main()
{
 
    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int freq[] = { 5, 9, 12, 13, 16, 45 };
 
    int size = sizeof(arr) / sizeof(arr[0]);
 
    node* root=build_the_huffman_tree(arr, freq, size);
    print_the_code(root,"");
    return 0;
}


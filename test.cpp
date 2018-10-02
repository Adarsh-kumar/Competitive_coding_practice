#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef struct node
{
int data;
struct node* next;
}node;

class  linked_list
{
node* head=NULL;
public:
void add_node(int data);
void print_the_list();
void delete_the_node(int x);
}

linked_list::void print_the_list()
{
node* temp=this->head;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}





int main()
{
cout<<ceil(float(4)/4);
return 0;
}


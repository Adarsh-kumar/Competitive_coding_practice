#include<iostream>
using namespace std;

typedef struct node
{
int data;
node* next;
}node;
node* head=NULL;
void circular_linked_list_builder(int no)
{
node* current=new(node);
for(int i=1;i<=no;i++)
{
if(head==NULL)
{
head=current;
head->data=i;
head->next=NULL;
head=current;
}
else if(i<no)
{
node* temp=new(node);
current->next=temp;
temp->data=i;
current=temp;
}
else if(i==no)
{
node* temp=new(node);
current->next=temp;
temp->data=i;
current=temp;
current->next=head;
}
}
}
void print_circular(int n)
{
node* temp=head;
for(int i=0;i<n;i++)
{
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<temp->data;
}
int puzzle_finder(node* head)
{
node* temp=head;
if(temp->next!=temp)
{
node* pointer_to_delete_node=temp->next;
temp->next=pointer_to_delete_node->next;
delete(pointer_to_delete_node);
puzzle_finder(temp->next);
}
else
{
return(temp->data);
}
}
int main ()
{
int n=10;
circular_linked_list_builder(1000000);
//cout<<head->next->data;
//print_circular(n);
cout<<puzzle_finder(head);
//cout<<head->data;
return 0;
}


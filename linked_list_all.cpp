#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
int data;
struct node* next;
}node;

class linked_list
{
node* head=NULL;
public:
void add_node(int data);
void delete_node(int data);
void print_the_list(void );
void delete_the_node(int data);
void delete_nodes(int data);
void insert_at_a_position(int data,int position);
node* reverse_the_linked_list(node* root);
bool linked_list::compare_lists(node* root1,node* root2)
};

void linked_list::add_node(int data)
{
if(head==NULL)
{
head=new node();
head->next=NULL;
head->data=data;
}
else
{
node* current=head;
while(current->next!=NULL)
{
current=current->next;
}

node* temp=new node();
temp->data=data;
temp->next=NULL;

current->next=temp;
}

}

node* linked_list::reverse_the_linked_list(node* root)
{
 node* prev=NULL;
 node* current=root;
  
 while(current->next!=NULL)
 {
     
     node* temp=current->next;
     current->next=prev;
     prev=current;
     current=temp;
 }
 
 node* ans=current;
 ans->next=prev;
 
 return ans;
}

bool linked_list::compare_lists(node* root1,node* root2)
{
if(root1==NULL&&root2==NULL)
return 1;

else if(root1==NULL||root2==NULL)
return 0;

else if(root1->val==root2->val)
return(compare_lists(root1->next,root2->next));

return 0;

}

void linked_list::delete_nodes(int data)
{
node* current=head;

if(head->data==data)
{
node* temp=head;
head=head->next;
delete(temp);
}

else
{
while(current->next->data!=data)
{
current=current->next;
}
node* temp=current->next;
current->next=temp->next;
delete(temp);
}

}

void linked_list::delete_the_node(int data)
{

//deleting nodes in one go
node** current=&head;

while((*current)->data!=data)
{
(current)=&(*current)->next;
}

node* temp=*current;
*current=temp->next;

}

void linked_list::insert_at_a_position(int data,int position)
{
if(position==0)
{
node* temp=new node();
temp->data=data;
temp->next=head;
head=temp;
}
else
{
node* current=head;
position--;
while(position--)
{
current=current->next;
}

node* temp=current->next;
node* temp2=new node();
temp2->data=data;
temp2->next=temp;
current->next=temp2;
}
}

void linked_list::print_the_list(void )
{
node* current=head;
while(current!=NULL)
{
cout<<current->data<<" ";
current=current->next;
}
}

int main()
{
linked_list l;
l.add_node(5);
l.add_node(88);
l.add_node(657);
//l.delete_nodes(88);
//l.print_the_list();
l.insert_at_a_position(56,0);
l.reverse_the_linked_list();
l.print_the_list();
return 0;
}



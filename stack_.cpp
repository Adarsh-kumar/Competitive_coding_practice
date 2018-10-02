#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef struct node
{
int data;
struct node* next;
}node;

class stack_
{
node* head;
public:
stack_();
void pop();
int top();
void push(int x);
};

stack_::stack_()
{
this->head=NULL;
}

void stack_::push(int a)
{
node* n=new(node);
n->data=a;
n->next=this->head;
this->head=n;
}

int stack_::top()
{
return(this->head->data);
}

void stack_::pop()
{
node* temp;
temp=this->head;
this->head=temp->next;
delete(temp);
}

int main()
{
stack_ s;
s.push(7);
s.push(8);
s.push(9);
cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;
s.push(89);
s.push(876);
cout<<s.top()<<endl;
return 0;
}



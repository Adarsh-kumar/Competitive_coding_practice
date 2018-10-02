
 
ListNode* reverse_it_man(ListNode* root,ListNode* end,ListNode* rstart,ListNode* rend,int count)
{
    int x=1;
    ListNode* prev=rend;
    ListNode* current=root;

while(x<=count)
{
    ListNode* temp=current->next;
    current->next=prev;
    prev=current;
    current=temp;
    x++;
}

current->next=prev;
if(rstart!=NULL)
rstart->next=current;

return current;
}

ListNode* Solution::reverseBetween(ListNode* root, int B, int C) {
    int i=1;
    if(C==B)
    return root;
    ListNode* temp=root;
    ListNode* start;
    ListNode* rstart=NULL;
    ListNode* rend=NULL;
    ListNode* end;
    
    while(i<=C)
    {
        if(i==B-1)
        rstart=temp;
        if(i==B)
        start=temp;
        if(i==C)
        end=temp;
        temp=temp->next;
        i++;
    }
    
     ListNode* curr=reverse_it_man(start,end,rstart,end->next,C-B);
     if(rstart==NULL)
     root=curr;
    return root;
}


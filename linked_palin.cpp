/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* reverse(ListNode* root)
{
 ListNode* prev=NULL;
 ListNode* current=root;
  
 while(current->next!=NULL)
 {
     
     ListNode* temp=current->next;
     current->next=prev;
     prev=current;
     current=temp;
     
 }
 
 ListNode* ans=current;
 current->next=prev;
 
 return ans;
 
}

bool compare_lists(ListNode* root1,ListNode* root2)
{
if(root1==NULL&&root2==NULL)
return 1;

else if(root1==NULL||root2==NULL)
return 0;

else if(root1->val==root2->val)
return(compare_lists(root1->next,root2->next));

return 0;

}

int Solution::lPalin(ListNode* root) {
    if(root->next==NULL)
    return 1;
    
    if(root->next->next==NULL)
    {
        return(root->val==root->next->val);
    }
    
    
    ListNode* slow=root;
    ListNode* fast=root;
    ListNode* prev_of_slow=root;
    
    while(fast->next!=NULL)
    {
        fast=fast->next->next;
        prev_of_slow=slow;
        slow=slow->next;
    }
    
     
    if(fast!=NULL)
    {
        slow=slow->next;
    }
    
    ListNode* second_half=slow;
    prev_of_slow->next=NULL;
    
    if(compare_lists(root,second_half))
    return 1;
    return 0;
}


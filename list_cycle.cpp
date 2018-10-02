/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* root) {
    ListNode* slowptr=root;
    ListNode* fastptr=root;
    ListNode* prev=NULL;
    ListNode* ans=NULL;
    while(slowptr&&fastptr&&fastptr->next)
    {
        prev==slowptr;
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
        if(slowptr==fastptr)
        {
            ans=slowptr;
            break;
        }
    }
    if(ans!=NULL)
    {
        ListNode* current=slowptr;
        int count=1;
        while(slowptr->next!=current)
        {
            count++;
            slowptr=slowptr->next;
        }
        
        current=root;
        slowptr=root;
        while(count--)
        {
            slowptr=slowptr->next;
        }
        
        while(slowptr!=current)
        {
            slowptr=slowptr->next;
            current=current->next;
        }
        
        return slowptr;
    }
    return NULL;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


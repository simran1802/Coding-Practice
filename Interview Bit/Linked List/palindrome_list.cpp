/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    ListNode* slow=A;
    ListNode* fast=A;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    ListNode *prev=NULL;
    ListNode *curr=slow;
    ListNode *next;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    slow=prev;
    fast=A;
    while(slow){
        if(fast->val != slow->val){
            return 0;
        }
        fast=fast->next;
        slow=slow->next;
    }
    return 1;
    
    
}

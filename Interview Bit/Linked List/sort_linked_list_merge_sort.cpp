/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode* merge(ListNode* A, ListNode* B){
     if(A==NULL)
        return B;
    if(B==NULL)
        return A;
    ListNode* res;
    if(A->val < B->val){
        res = A;
        A=A->next;
    }
    else{
        res = B;
        B=B->next;
        
    }
    ListNode* a = res;
    while(A!=NULL && B!=NULL){
        if(A->val < B->val){
            res->next = A;
            A = A->next;
            res=res->next;
            
        }
        else{
            res->next = B;
            B = B->next;
            res=res->next;
            
        }
    }
    if(B==NULL)
        res->next = A;
    else
        res->next = B;
        
    return a;
 }
 
ListNode* Solution::sortList(ListNode* A) {
    if(A==NULL || A->next==NULL)
        return A;
    ListNode *slow=A, *fast=A, *temp=A;
    while(fast!=NULL && fast->next!=NULL){
        temp = slow;
        slow = slow->next;
        fast = fast->next->next;
        
    }
    temp->next = NULL;
    ListNode *ls = sortList(A);
    ListNode *lr = sortList(slow);
    return merge(ls,lr);
    
}

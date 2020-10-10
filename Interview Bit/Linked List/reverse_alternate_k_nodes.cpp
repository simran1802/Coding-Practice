/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A, int b) {
    if(A == NULL) 
        return NULL;
    
    ListNode *head,*curr,*next,*prev;
    
    curr = A; prev = NULL;
    int count = 0;
    
    while(count < b && curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        
        count++;
    }
    
    head = prev;
    A->next = curr;
    
    if(curr==NULL) 
        return head;
    
    count = 1;
    
    while(count < b && curr)
    {
        curr = curr->next;
        count ++;
    }
    
    curr->next = solve(curr->next,b);
    
    return head;
}

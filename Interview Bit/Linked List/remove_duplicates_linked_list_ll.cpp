/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(!A || !A->next){
        return A;
    }
    if(A->next->val != A->val){
        A->next = deleteDuplicates(A->next);
        return A;
    }
    while(A->next && A->next->val==A->val){
        A = A->next;
    }
    A = deleteDuplicates(A->next);
    return A;
    
}

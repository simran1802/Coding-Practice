/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode *res = A;
    while(A && A->val==0){
        A = A->next;
    }
    ListNode *head = A;
    int tmp;
    while(head){
        if(head->val == 0){
           tmp = A->val;
           A->val = 0;
           A = A->next;
           head->val =  tmp;
        }
        head = head->next;
    }
    return res;
}

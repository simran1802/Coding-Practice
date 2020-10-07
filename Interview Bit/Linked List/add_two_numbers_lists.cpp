/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode prehead(0);
    ListNode *p = &prehead;
    int extra=0;
    while(A || B || extra){
        int sum = (A ? A->val:0) + (B ? B->val:0) + extra;
        extra = sum/10;
        p->next = new ListNode(sum%10);
        p = p->next;
        A = A ? A->next:A;
        B = B ? B->next:B;
        
    }
    return prehead.next;
}

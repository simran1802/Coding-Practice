/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode *curr = A;
    ListNode *prev = NULL;
    ListNode *temp = NULL;
    int len = 0;
    
    while(curr!=NULL && len < B){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        len++;
    }
    if(temp!=NULL){
        A->next = reverseList(temp,B);
    }
    return prev;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode *head = A;
    ListNode *temp = head;
    while(head!=NULL && head->next!=NULL){
        int first = head->val;
        int second = head->next->val;
        head->val = second;
        head->next->val = first;
        head = head->next->next;
    }
    return temp;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    ListNode *temp = new ListNode(0);
    temp->next = A;
    ListNode *prev, *curr, *next_node;
    prev = temp;
    for(int i=0;i<B-1;i++){
        prev = prev->next;
    }
    curr = prev->next;
    for(int i=0;i<C-B;i++){
        next_node = curr->next;
        curr->next = next_node->next;
        next_node->next = prev->next;
        prev->next = next_node;
    }
    return temp->next;
}

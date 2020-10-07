/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode *temp = A;
    int len = 0;
    while(temp->next != NULL){
        temp = temp->next;
        len++;
    }
    B = B%(++len);
    temp->next = A;
    for(int i=0;i<len-B;i++){
        temp = temp->next;
    }
    ListNode *head = temp->next;
    temp->next = NULL;
    return head;
}

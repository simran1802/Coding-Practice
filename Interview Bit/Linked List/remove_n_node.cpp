/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *root = A;
    int len=0;
    while(root!=NULL){
        len++;
        root = root->next;
    }
    root = A;
    if(B >= len){
        return root->next;
    }
    len = len-B;
    for(int i=0;i<len-1;i++){
        root=root->next;
    }
    root->next = root->next->next;
    return A;
}

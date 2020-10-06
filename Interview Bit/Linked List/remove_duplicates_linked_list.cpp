/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *root=A;
    while(root->next != NULL){
        if(root->val != root->next->val){
            root=root->next;
        }
        else{
            root->next = root->next->next;
        }
    }
    return A;
}

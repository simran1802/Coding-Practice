/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    if(A==NULL || A->next==NULL)
        return A;
    ListNode *res = insertionSortList(A->next);
    int x = A->val;
    A->next = res;
    ListNode *temp = A;
    if(res!=NULL){
        while(res!=NULL && x > res->val){
            A->val = res->val;
            A = A->next;
            res = res->next;
            
        }
    }
    A->val = x;
    return temp;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
    ListNode *head=A;
    int len=0;
    while(head){
        len++;
        head=head->next;
    }
    int mid = len/2 + 1;
    if(mid > B){
        int n = mid-B-1;
        while(n--){
            A = A->next;
        }
        return A->val;
    }
    return -1;
    
}

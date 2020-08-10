/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return head;
        
        ListNode *first = head;
        int len = 1;
        while(first->next!= NULL){
            len++;
            first= first->next;
        }
        first->next = head;
        
        k = k%len;
        while(--len >= k){
            first= first->next;
            
        }
        ListNode *second= first->next;
        first->next= NULL;
        
        return second;
    }
};

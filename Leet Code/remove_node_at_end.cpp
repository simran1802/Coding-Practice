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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr)
            return head;
        ListNode *prev = head;
        ListNode *curr = head;
        
        while(n--)
            curr=curr->next;
        if(curr==nullptr){
            head= head->next;
            return head;
            
        }
        curr=curr->next;
        while(curr != nullptr){
            curr= curr->next;
            prev = prev->next;
            
        }
        prev->next = prev->next->next;
        return head;
        
    }
};

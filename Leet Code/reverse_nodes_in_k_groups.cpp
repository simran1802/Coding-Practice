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
    int length(ListNode *node){
        int c=0;
        while(node){
            node=node->next;
            c++;
        }
        return c;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || k==1)
            return head;
        if(length(head) < k)
            return head;
        ListNode *curr = head;
        ListNode *prev=NULL, *next_node = NULL;
        for(int i=0;i<k;i++){
            next_node = curr->next;
            curr->next = prev;
            prev= curr;
            curr = next_node;
        }
        head->next = reverseKGroup(curr,k);
        return prev;
    }
};  

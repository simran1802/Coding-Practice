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
    ListNode* swapPairs(ListNode* head) {
        int i=0;
        ListNode *c= head;
        ListNode *p= NULL;
        ListNode *n = NULL;
        
        while(i<2 && c!=NULL){
            n = c->next;
            c->next = p;
            p = c;
            c = n;
            i++;
            
        }
        if(n!=nullptr){
            head->next = swapPairs(n);
        }
        return p;
    }
};

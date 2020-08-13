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
    ListNode *merge_two_list(ListNode *l1,ListNode *l2){
        if(l1==nullptr)
            return l2;
        else if(l2==nullptr)
            return l1;
        if(l1->val <= l2->val){
            l1->next = merge_two_list(l1->next,l2);
            return l1;
        }
        else{
            l2->next = merge_two_list(l1,l2->next);
            return l2;
        }
        
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())
            return nullptr;
        int n = lists.size();
        while(n > 1){
            for(int i=0;i<n/2;++i){
                lists[i] = merge_two_list(lists[i],lists[n-1-i]);
            }
            n = (n+1)/2;
            
        }
        return lists.front();
        
    }
};

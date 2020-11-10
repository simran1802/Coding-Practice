/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    priority_queue<int,vector<int>,greater<int>> min_heap;
    ListNode *temp;
    for(int i=0;i<A.size();i++){
        for(ListNode *p=A[i];p!=NULL;){
            min_heap.push(p->val);
            p=p->next;
        }
    }
    ListNode *res = new ListNode(0);
    ListNode *tail = res;
    for(int i=0;i<A.size();i++){
        tail->next = A[i];
        while(tail->next){
            tail->next->val = min_heap.top();
            min_heap.pop();
            tail =tail->next;
        }
    }
    return res->next;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 
 ListNode* Solution::solve(ListNode* a) {
    ListNode* p=a;
    int m=1;
    stack<int>s;
    while(1){
        // cout<<m<<" ";
        if(m%2==0)s.push(p->val);
        // cout<<p->val<<" ";
        if(p->next==NULL)break;
        p=p->next;m++;
    }
    // while(!s.empty())cout<<s.top(),s.pop();
    p=a;m=1;
    while(1){
        if(m%2==0){
            p->val=s.top();s.pop();
        }
        if(p->next==NULL)break;
        p=p->next;m++;
    }
    return a;
}


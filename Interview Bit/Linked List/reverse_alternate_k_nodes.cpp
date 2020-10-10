/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A, int B) {
    ListNode *curr=A;
    ListNode *prev=NULL, *next=NULL;
    int len=0;
    static bool alternate = true;
    if(alternate){
        while(curr && len<B){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            len++;
        }
        alternate = false;
        if(next){
            A->next = solve(next,B);
        }
        
    }
    else if(!alternate){
        prev = A;
        while(curr && len<B){
            next = curr;
            curr = curr->next;
            len++;
        }
        alternate=true;
        if(next)
            next->next = solve(next->next,B);
        
    }
    alternate = true;
    return prev;
    
    
}

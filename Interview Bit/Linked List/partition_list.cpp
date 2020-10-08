/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* head, int x) {
    if(head == NULL || head->next == NULL)
        return head;
        
    ListNode *less = NULL, *greater = NULL;
    ListNode *temp = head, *next = NULL;
    ListNode *less_head = NULL, *greater_head = NULL;
    
    while(temp != NULL)
    {
        next = temp->next;
        if(temp->val < x)
        {
            if(less == NULL)
            {
                less = temp;
                less_head = less;
            }
            else
            {
                less->next = temp;
                less = less->next;
            }
        }
        else
        {
            if(greater == NULL)
            {
                greater = temp;
                greater_head = greater;
            }
            else
            {
                greater->next = temp;
                greater = greater->next;
            }
        }
        
        temp = next;
    }
    
    if(greater_head == NULL)
        return less_head;
    if(less_head == NULL)
        return greater_head;
        
    greater->next = NULL;
    less->next = greater_head;
    
    return less_head;
    
}

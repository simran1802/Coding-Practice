/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

TreeNode *helper(int idx,int end,vector<int> &arr){
    if(idx>end)
        return NULL;
    int mid= (idx+end)/2;
    TreeNode *node = new TreeNode(arr[mid]);
    node->left = helper(idx,mid-1,arr);
    node->right = helper(mid+1,end,arr);
    return node;
}
TreeNode* Solution::sortedListToBST(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> arr;
    while(A!=NULL){
        arr.push_back(A->val);
        A=A->next;
    }
    return helper(0,arr.size()-1,arr);
}

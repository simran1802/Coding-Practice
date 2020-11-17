/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    stack<TreeNode*> stk;
    vector<int> v;
    if(!A)
        return v;
    TreeNode *curr = A->left;
    stk.push(A);
    while(!stk.empty() || curr){
        while(curr){
            stk.push(curr);
            curr=curr->left;
        }
        TreeNode *temp = stk.top();
        stk.pop();
        v.push_back(temp->val);
        curr = temp->right;
    }
    return v;
}

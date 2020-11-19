/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> stk;
    if(A==NULL)
        return ans;
    stk.push(A);
    while(!stk.empty()){
        TreeNode *root = stk.top();
        if(root->left){
            stk.push(root->left);
            root->left=NULL;
            continue;
        }
        if(root->right){
            stk.push(root->right);
            root->right = NULL;
            continue;
        }
        ans.push_back(root->val);
        stk.pop();
    }
    return ans;
    
}

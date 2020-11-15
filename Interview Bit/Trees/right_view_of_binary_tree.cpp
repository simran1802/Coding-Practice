/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void helper(TreeNode *A,vector<int> &ans,int level){
    if(!A)
        return ;
    if(level > ans.size())
        ans.push_back(A->val);
    helper(A->right,ans,level+1);
    helper(A->left,ans,level+1);
}
 
vector<int> Solution::solve(TreeNode* A) {
    vector<int> ans;
    helper(A,ans,1);
    return ans;
}

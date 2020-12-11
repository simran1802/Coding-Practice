/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int helper(TreeNode *root,int &res){
     if(root==NULL)
        return 0;
    int l= helper(root->left,res);
    int r = helper(root->right,res);
    
    int max_single = max(root->val, max(l,r)+root->val);
    int max_top = max(max_single,l+r+root->val);
    res = max(res,max_top);
    return max_single;
 }
int Solution::maxPathSum(TreeNode* A) {
    int res=INT_MIN;
    helper(A,res);
    return res;
    
    
}

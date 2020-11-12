/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* A, int B) {
    if(A==NULL)
        return 0;
    if(!A->right && !A->left)
        return ((B-(A->val))==0);
    else
        return hasPathSum(A->left,B-(A->val)) || hasPathSum(A->right,B-(A->val));
}

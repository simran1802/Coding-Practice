/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int height(TreeNode* A){
    if(A==NULL)
        return 0;
    return 1+max(height(A->left),height(A->right));
}
int Solution::isBalanced(TreeNode* A) {
    if(A==NULL)
        return 1;
    int ans = height(A->left) - height(A->right);
    if(abs(ans) > 1)
        return 0;
    if(isBalanced(A->left) && isBalanced(A->right))
        return 1;
    else
        return 0;
}

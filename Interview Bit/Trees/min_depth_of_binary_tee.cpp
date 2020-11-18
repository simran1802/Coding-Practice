/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* A) {
    if(!A)
        return 0;
    if(A->left==NULL && A->right==NULL)
        return 1;
    int left=INT_MAX, right=INT_MAX;
    if(A->left)
        left = minDepth(A->left);
    if(A->right)
        right = minDepth(A->right);
    return 1+min(left,right);
}

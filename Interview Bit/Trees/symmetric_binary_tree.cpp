/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool helper(TreeNode *l, TreeNode *r){
    if(!l ||!r)
        return l==r;
    if(l->val != r->val)
        return 0;
    return helper(l->left,r->right) && helper(l->right,r->left);
    
}
int Solution::isSymmetric(TreeNode* A) {
    if(!A)
        return 1;
    return helper(A->left,A->right);
}

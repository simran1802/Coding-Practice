/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void helper(TreeNode *root){
    if(!root)
        return ;
    if(root->left==NULL && root->right==NULL)
        return;
    TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
    if(root->left)
        helper(root->left);
    if(root->right)
        helper(root->right);
}

TreeNode* Solution::invertTree(TreeNode* A) {
    if(A==NULL || A->left==NULL && A->right==NULL)
        return A;
    helper(A);
    return A;
}

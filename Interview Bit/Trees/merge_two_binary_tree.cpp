/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::solve(TreeNode* A, TreeNode* B) {
    TreeNode *new_tree = new TreeNode(0);
    if(!A && !B)
        return NULL;
    if(!A)
        return B;
    if(!B)
        return A;
    if(A && B){
        new_tree->val = A->val + B->val;
        new_tree->left = solve(A->left,B->left);
        new_tree->right = solve(A->right,B->right);
    }
    return new_tree;
    
}

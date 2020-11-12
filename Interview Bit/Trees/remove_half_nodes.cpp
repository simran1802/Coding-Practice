/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void helper(TreeNode* root){
    if(!root) return;
    if(root->left){
    if(root->left->left && !root->left->right){
        root->left = root->left->left;
    }
    if(!root->left->left && root->left->right){
        root->left = root->left->right;
    }
        
    }
    if(root->right){
     if(root->right->left && !root->right->right){
        root->right = root->right->left;
    }
    if(!root->right->left && root->right->right){
        root->right = root->right->right;
    }
    
    }
    helper(root->left);
    helper(root->right);
}

TreeNode* Solution::solve(TreeNode* A) {
    if(!A)
        return NULL;
    if(A->left && !A->right)
        A=A->left;
    if(A->right && !A->left)
        A=A->right;
    TreeNode *ans = A;
    helper(A);
    return ans;
}

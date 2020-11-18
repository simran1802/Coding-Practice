/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::maxDepth(TreeNode* A) {
    if(A!=NULL){
        if(A->left==NULL && A->right==NULL)
            return 1;
        else{
            int left = maxDepth(A->left);
            int right = maxDepth(A->right);
            return 1+max(left,right);
        }
    }
    return 0;
}

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* helper(const vector<int> &A,int l,int h){
    if(l>h)
        return NULL;
    int mid = (l+h)/2;
    TreeNode *root = new TreeNode(A[mid]);
    root->left =helper(A,l,mid-1);
    root->right = helper(A,mid+1,h);
    return root;
}

TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    if(A.size()==0)
        return NULL;
    return helper(A,0,A.size()-1);
}

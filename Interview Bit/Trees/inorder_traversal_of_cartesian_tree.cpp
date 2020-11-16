/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* helper(vector<int>&A,int low,int high){
    if(low>high) return NULL;
    int index=max_element(A.begin()+low,A.begin()+high+1)-A.begin();
    TreeNode* root=new TreeNode(A[index]);
    root->left=helper(A,low,index-1);
    root->right=helper(A,index+1,high);
    return root;
}

TreeNode* Solution::buildTree(vector<int> &A) {
    return helper(A,0,A.size()-1);
}

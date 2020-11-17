/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* helper(vector<int> &pre,int &pre_idx,int start,int end,unordered_map<int,int> &mp){
    if(start>end) 
        return NULL;
    TreeNode *root = new TreeNode(pre[pre_idx++]);
    if(start==end)
        return root;
    root->left = helper(pre,pre_idx,start,mp[root->val]-1,mp);
    root->right = helper(pre,pre_idx,mp[root->val]+1,end,mp);
    return root;
     
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++)
        mp[B[i]] = i;
        int n = 0;
        return helper(A,n,0,A.size()-1,mp);
}

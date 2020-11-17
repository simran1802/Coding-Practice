/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* helper(vector<int> &in,vector<int> &post,int &post_idx,int start,int end,unordered_map<int,int> &mp){
    if(start>end)
        return 0;
    int curr = post[post_idx];
    post_idx--;
    TreeNode *root = new TreeNode(curr);
    root->right = helper(in,post,post_idx,mp[curr]+1,end,mp);
    root->left = helper(in,post,post_idx,start,mp[curr]-1,mp);
    return root;
} 
 
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++)
        mp[A[i]] = i;
        int x = A.size()-1;
    return helper(A,B,x,0,A.size()-1,mp);
}

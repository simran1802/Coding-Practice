/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void helper(TreeNode *root,int B,int sum,vector<int> &v,vector<vector<int>> &ans){
    if(!root)
        return ;
    if(root->left==NULL && root->right==NULL && root->val+sum==B){
        v.push_back(root->val);
        ans.push_back(v);
        v.pop_back();
        return;
        
    }
    v.push_back(root->val);
    helper(root->left,B,sum+root->val,v,ans);
    helper(root->right,B,sum+root->val,v,ans);
    v.pop_back();
}
 
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int>> ans;
    int sum=0;
    vector<int> v;
    helper(A,B,sum,v,ans);
    return ans;
    
}

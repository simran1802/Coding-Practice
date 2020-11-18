/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void dfs(TreeNode* root,int sum,int &ans){
    if(!root)
        return ;
    sum = (sum*10 + root->val)%1003;
    if(root->left==root->right)
        ans = (ans+sum)%1003;
    dfs(root->left,sum,ans);
    dfs(root->right,sum,ans);
    
}

int Solution::sumNumbers(TreeNode* A) {
    int ans=0;
    dfs(A,0,ans);
    return ans;
}

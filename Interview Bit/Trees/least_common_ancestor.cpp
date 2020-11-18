/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int helper(TreeNode *root,int B,int C,bool &b1,bool &b2){
    if(!root)
        return NULL;
    int ans=0;
    if(root->val==B){
        ans+=B;
        b1 = true;
    }
    if(root->val==C){
        ans+=C;
        b2 = true;
    }
    ans += helper(root->left,B,C,b1,b2) + helper(root->right,B,C,b1,b2);
    if(ans==B+C)
        return root->val;
    return ans;
    
}

int Solution::lca(TreeNode* A, int B, int C) {
    bool f1=false,f2=false;
    int ans = helper(A,B,C,f1,f2);
    if(f1 && f2)
        return ans;
    return -1;
}

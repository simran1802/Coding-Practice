/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool helper(TreeNode *A,int B,vector<int> &res){
    if(A->val == B){
        res.push_back(A->val);
        return true;
    }
    if((A->left && helper(A->left,B,res)) || (A->right && helper(A->right,B,res))){
        res.push_back(A->val);
        return true;
    }
    return false;
}
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> res;
    helper(A,B,res);
    reverse(res.begin(),res.end());
    return res;
}

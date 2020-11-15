/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void helper(TreeNode *A,int level,unordered_map<int,vector<int>> &mp){
    if(A==NULL)
        return ;
    mp[level].push_back(A->val);
    helper(A->left,level+1,mp);
    helper(A->right,level+1,mp);
    
}
 
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    unordered_map<int,vector<int>> mp;
    int level = 0;
    vector<vector<int>> ans;
    helper(A,level,mp);
    for(int i=0;i<mp.size();i++){
        if(i%2!=0)
            reverse(mp[i].begin(),mp[i].end());
        ans.push_back(mp[i]);
    }
    return ans;
}

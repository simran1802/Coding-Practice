/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        vector<int> path;
        helper(root,sum,path,res);
        return res;
    }
    private:
        void helper(TreeNode *root,int sum,vector<int> &path,vector<vector<int>> &paths){
            if(!root)
                return;
            path.push_back(root->val);
            if(sum==root->val && !root->left && !root->right)
                paths.push_back(path);
            helper(root->left,sum-root->val,path,paths);
            helper(root->right,sum-root->val,path,paths);
            path.pop_back();
        }
};

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        traverse(root,0,result);
        return result;
    }
    
    void traverse(TreeNode *root, int depth, vector<vector<int>> &result){
        if(!root)
            return ;
        if(result.size()== depth){
            vector<int> temp;
            result.push_back(temp);
        }
        if(depth%2 == 0)
            result[depth].push_back(root->val);
        else{
            result[depth].insert(result[depth].begin(),root->val);
        }
        traverse(root->left,depth+1,result);
        traverse(root->right,depth+1,result);
    }
};

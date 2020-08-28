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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> tree_stack;
        if(!root)
            return result;
        tree_stack.push(root);
        
        while(!tree_stack.empty()){
            TreeNode *node = tree_stack.top();
            result.push_back(node->val);
            tree_stack.pop();
            if(node->left)
                tree_stack.push(node->left);
            if(node->right)
                tree_stack.push(node->right);
            
        }
        reverse(result.begin(),result.end());
        return result;
    }
};

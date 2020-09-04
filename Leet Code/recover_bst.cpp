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
 
 Example:
 Input: [1,3,null,null,2]

   1
  /
 3
  \
   2

Output: [3,1,null,null,2]

   3
  /
 1
  \
   2
 */
 
class Solution {
private:
    TreeNode *first=nullptr;
    TreeNode *second=nullptr;
    TreeNode *prev = new TreeNode(INT_MIN);
    
public:
    void recoverTree(TreeNode* root) {
        helper(root);
        swap(first->val,second->val);
        
    }
    
    void helper(TreeNode *root){
        if(!root)
            return;
        helper(root->left);
        if(first==NULL && prev->val > root->val)
            first = prev;
        if(first != NULL && prev->val > root->val)
            second = root;
        prev=root;
        helper(root->right);
    }
};

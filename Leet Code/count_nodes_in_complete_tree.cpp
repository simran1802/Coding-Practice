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
    int height(TreeNode *root){
        return root==nullptr ? -1 : 1+ height(root->left);
    }
    int countNodes(TreeNode* root) {
        int count=0;
        int h = height(root);
        while(root!= nullptr){
            if(height(root->right)== h-1){
                count+= 1 <<h;
                root= root->right;
            }
            else{
                count += 1 <<h-1;
                root= root->left;
                
            }
            h--;
        }
        return count;
    }
};

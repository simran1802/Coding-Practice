/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A) {
    deque<TreeNode *> dq;
    vector<int> res;
    dq.push_front(A);
    TreeNode *root;
    while(!dq.empty()){
        root = dq.front();
        dq.pop_front();
        res.push_back(root->val);
        if(root->right)
            dq.push_front(root->right);
        if(root->left)
            dq.push_back(root->left);
    }
    return res;
}

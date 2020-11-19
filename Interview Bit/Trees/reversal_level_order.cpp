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
    if(A==NULL)
        return {};
    queue<TreeNode*> q;
    vector<int> res;
    q.push(A);
    while(q.size()){
        TreeNode *temp = q.front();
        q.pop();
        if(temp!=NULL){
            res.push_back(temp->val);
            if(temp->right)
                q.push(temp->right);
            if(temp->left)
                q.push(temp->left);
                
        }
    }
    reverse(res.begin(),res.end());
    return res;
}

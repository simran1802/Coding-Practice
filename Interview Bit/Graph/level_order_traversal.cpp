/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>> ans;
    if(!A)
        return ans;
    queue<TreeNode*>q;
    q.push(A);
    while(!q.empty())
    {
        vector<int> row;
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            TreeNode *temp = q.front();
            q.pop();
            row.push_back(temp->val);
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        ans.push_back(row);
    }
    return ans;
}

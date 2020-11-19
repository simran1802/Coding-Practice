/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::solve(TreeNode* A) {
    if(A==NULL)
        return 0;
    int sum = INT_MIN;
    queue<TreeNode*> q;
    q.push(A);
    while(!q.empty()){
        int k=q.size(), s=0;
        for(int i=0;i<k;i++){
            TreeNode *temp = q.front();
            q.pop();
            s += temp->val;
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            
        }
        sum = max(s,sum);
        
    }
    return sum;
}

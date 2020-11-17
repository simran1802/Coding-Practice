/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    stack<TreeNode*> s;
    vector<int> ans;
    if(!A)
        return ans;
    while(true){
        while(A!=NULL){
            ans.push_back(A->val);
            s.push(A);
            A=A->left;
        }
        if(s.empty())
            break;
        
        A = s.top();
        s.pop();
        A=A->right;
        
    }
    return ans;
    
}

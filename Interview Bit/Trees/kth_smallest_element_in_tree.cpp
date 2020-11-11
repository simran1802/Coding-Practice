/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int cnt;

void inorder(TreeNode* A, int& ans) {
if (A == NULL) return;

inorder(A->left, ans);
cnt--;
if(cnt == 0){ ans = A->val; return;} 
inorder(A->right, ans);

}

int Solution::kthsmallest(TreeNode* A, int k) {
int ans = INT_MIN; cnt = k;

inorder( A, ans);
return ans;

}

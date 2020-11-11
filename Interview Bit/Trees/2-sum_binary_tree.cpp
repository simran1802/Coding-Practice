/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int helper(set<int> &st,TreeNode *A,int B){
    if(A==NULL)
        return 0;
    if(st.find(B-A->val) != st.end()){
        return 1;
    }
    st.insert(A->val);
    return helper(st,A->left,B) || helper(st,A->right,B);
} 

int Solution::t2Sum(TreeNode* A, int B) {
    set<int> st;
    return helper(st,A,B);
    
}

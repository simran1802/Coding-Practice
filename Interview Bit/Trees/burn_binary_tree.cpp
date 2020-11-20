/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int depth(TreeNode* A){
    if(A==NULL) return 0;
    return 1+max(depth(A->left),depth(A->right));
}
int depth_below(TreeNode* A, int B, int d){
    if(A==NULL) 
        return 0;
    if(A->val==B)
        return d;
    else
        return max(depth_below(A->left,B,d+1),depth_below(A->right,B,d+1));
}
bool find(TreeNode* A,int B, int &t, int d){//d stores that how much below A in the tree is B present
    if(A==NULL) return false;
    if(A->val==B)   {
        return true;
    }
    if(find(A->right,B,t,d-1)){
        t=max(depth(A->left)+d,t);
        return true;
    }
    else if(find(A->left,B,t,d-1)){
        t=max(depth(A->right)+d,t);
        return true;
    }
    return false;
}
int Solution::solve(TreeNode* A, int B) {
    int d=depth_below(A,B,0);//calculate how much down below in the tree B exists
    int t=0;
    find(A,B,t,d);
    return t;
}

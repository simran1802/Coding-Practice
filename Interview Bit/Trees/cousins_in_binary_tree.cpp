/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int getlevel(TreeNode* A, int B, int level)
 {
     if(A==NULL) return 0;
     if(A->val==B) return level;
     int val=getlevel(A->left,B,level+1);
     if(val>0) return val;
     
     return getlevel(A->right,B,level+1);
 }
 
void getcousin(TreeNode* A, vector<int> &v, int level,int B)
{
    if(A==NULL || level<2) return;
    if(level==2)
    {
        if(A->left && A->right)
        {
         if(A->left->val==B || A->right->val==B) return;
        }
        if(A->left )
        {
            if(A->left->val!=B) v.push_back(A->left->val);
        }    
        if(A->right) 
        {
            if(A->right->val!=B) v.push_back(A->right->val);
        }    
    }
    else if(level>2)
    {
        getcousin(A->left,v,level-1,B);
        getcousin(A->right,v,level-1,B);
    }
}

vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> ans;
    int level=getlevel(A,B, 1);
    
    getcousin(A,ans,level,B);

    return ans;
}

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

  
void inorder(TreeNode *root,TreeNode **pre,TreeNode **first,TreeNode **middle,TreeNode **last)
{
    if(!root)return ;
    inorder(root->left,pre,first,middle,last);
    
 //  cout<<root->val<<" ";
        if(*pre && root->val<(*pre)->val)
        {
              if(!*first){
              *first = *pre;
           * middle = root;
                 }
            else
            {
                *last = root;
                return;
            }    
        }
        
        *pre=root;
       
    
   
    *pre = root;
    inorder(root->right,pre,first,middle,last);
}

vector<int> Solution::recoverTree(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   struct TreeNode *first, *middle, *last, *prev;
    first = middle = last = prev = NULL;
     //correctBSTUtil( A, &first, &middle, &last, &prev );
    inorder(A,&prev,&first,&middle,&last);
    
    vector<int> x;
   if(first && last){
       x.push_back(first->val);
    x.push_back(last->val);
    sort(x.begin(),x.end());
   }
   else if(first && middle)
   {
        x.push_back(first->val);
    x.push_back(middle->val);
    sort(x.begin(),x.end());
   }
    
    return x;
}


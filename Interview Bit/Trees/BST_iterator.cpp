/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode *A;
vector<int> res;
int i=0;
void inorder(TreeNode *root){
    if(root==NULL)
        return ;
    inorder(root->left);
    res.push_back(root->val);
    inorder(root->right);
    return;
}
BSTIterator::BSTIterator(TreeNode *root) {
    inorder(root);
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(i<res.size())
        return true;
    return false;
}

/** @return the next smallest number */
int BSTIterator::next() {
    return res[i++];
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */

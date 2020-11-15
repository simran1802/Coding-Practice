/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Level(TreeLinkNode* A, int lvl, unordered_map<int, TreeLinkNode*> &mp)
{
    if(A==NULL)
    return;
    if(mp.find(lvl)==mp.end())
    {
        mp[lvl] = A;
        A->next = NULL;
    }
    else
    {
        mp[lvl]->next = A;
        mp[lvl] = A;
        A->next = NULL;
    }
    Level(A->left, lvl+1, mp);
    Level(A->right, lvl+1, mp);
    return;
}
void Solution::connect(TreeLinkNode* A) {
    unordered_map<int, TreeLinkNode*> mp;
    Level(A, 0, mp);
    return;
}

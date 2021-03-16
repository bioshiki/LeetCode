/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool r=!p&&!q;
        if(r)
            return r;
        r=p&&q;
        if(!r)
            return r;
        r=p->val==q->val;
        if(!r)
            return r;
        r=isSameTree(p->left,q->left);
        if(!r)
            return r;
        return isSameTree(p->right,q->right);
    }
};

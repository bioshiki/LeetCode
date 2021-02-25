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
//my solution-runtime 8ms
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isSymmetric(root->left,root->right);
    }
    bool isSymmetric(TreeNode* left,TreeNode* right){
        bool r=!left&&!right;
        if(r){
            return r;
        }
        r=left&&right;
        if(!r){
            return r;
        }
        r=left->val==right->val;
        if(!r){
            return r;
        }
        r=isSymmetric(left->left,right->right);
        if(!r){
            return r;
        }
        r=isSymmetric(left->right,right->left);
        return r;
    }
};

/*faster solution on LeetCode-runtime 4ms
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        TreeNode *left, *right;
        if(!root) return true;
        queue<TreeNode*> q;
        q.push(root->left);
        q.push(root->right);
        while(!q.empty()) {
            left=q.front();
            q.pop();
            right=q.front();
            q.pop();
            if(left==NULL && right==NULL)
                continue;
            if(left==NULL || right==NULL)
                return false;
            if(left->val!=right->val)
                return false;
            q.push(left->left);
            q.push(right->right);
            q.push(left->right);
            q.push(right->left);
        }
        return true;
    }
};
*/

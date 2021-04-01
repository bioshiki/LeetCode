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
    void fullPath(TreeNode* root, string s, vector<string>& r){
        if(root==nullptr)
            return;
        s+=to_string(root->val);
        if(root->left==nullptr&&root->right==nullptr){
            r.push_back(s);
            return;
        }
        if(root->left){
            fullPath(root->left,s+"->",r);
        }
        if(root->right){
            fullPath(root->right,s+"->",r);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==nullptr)
            return {};
        vector<string> r;
        fullPath(root,"",r);
        return r;
    }
};

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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root || !subRoot){
            return root == subRoot;
        }
        return dfs(root,subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
       
    }

    bool dfs(TreeNode* root, TreeNode* subRoot){
        if (root == nullptr || subRoot == nullptr){
            return root == subRoot;
        }

        return root->val == subRoot->val &&
        dfs(root->left,subRoot->left) &&
        dfs(root->right,subRoot->right);
    }




};

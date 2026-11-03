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

#include <climits>

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return valid(root);
    }


    bool valid(TreeNode* node, int left = INT_MIN, int right = INT_MAX){
        if (node == nullptr){
            return true;
        }

        if (!(node->val > left and node->val < right)){
            return false;
        }

        return valid(node->left,left,node->val) && valid(node->right,node->val, right);

        
    }
};

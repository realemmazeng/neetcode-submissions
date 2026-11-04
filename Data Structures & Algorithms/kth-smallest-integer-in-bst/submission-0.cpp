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

//kth smallest should be the leftmost of the left subtree 
//largest should be the rightmost of the right subtree 

class Solution {
public:
    int count = 0;

    int kthSmallest(TreeNode* root, int k) {
        return helper(root, k);
    }

    int helper(TreeNode* node, int k){
        if (node == nullptr) return -1;

        int left = helper(node->left, k);
        if (left != -1) return left;
        count++;

        if (count == k) return node->val;

        return helper(node->right, k);
    }
};

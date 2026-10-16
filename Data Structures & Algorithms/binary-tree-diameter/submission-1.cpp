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
int best = 0;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return best;
    }

    int dfs(TreeNode* root){
        if (root == nullptr){
            return 0;
        }

        int left = dfs(root->left);
        int right = dfs(root->right);
        // check if possible max diameter 
        best = max(left+right, best);

        // if not, take the longest path of the two and give to the parent 
        return 1 + max(left,right);
        
    }
};

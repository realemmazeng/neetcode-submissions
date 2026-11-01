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

// cleanest way is to put maxSoFar in the parameter of the function. 
// if declare variable in public,
// the maxSoFar is shared between left & right subtree instead of 
// seperate maxSoFars in each subtree 

class Solution {
public:
    int count = 0;

    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }

    int dfs(TreeNode* node, int maxSoFar){
        if (node == nullptr){
            return 0;
        }
        
        int best = max(maxSoFar, node->val);

        if(node->val >= best){
            count += 1;
        }

        dfs(node->left, best);
        dfs(node->right, best);
        
        return count;

    }
};

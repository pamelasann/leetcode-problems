// Last submission: 11/24/2023, 12:50:33 PM
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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;
        int result = 0;
        if(root->left && !root->left->left && !root->left->right)
            result += root->left->val;
        
        result += sumOfLeftLeaves(root->left); // call left subtree
        result += sumOfLeftLeaves(root->right); // call right subtree
        return result;
    }
};
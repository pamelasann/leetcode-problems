// Last submission: 11/22/2023, 6:44:54 PM
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
    void inorder(TreeNode* root, vector<int>& output) {
        if(root == nullptr)
            return;
        inorder(root->left, output); // left branch
        output.push_back(root->val);
        inorder(root->right, output); // right branch
    };
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> output;
        // empty tree
        if(!root) {
            return output;
        }
        // tree has only root
        if(root->left == nullptr && root->right == nullptr) {
            output.push_back(root->val);
            return output;
        }
        inorder(root, output);
        return output;
    }
};
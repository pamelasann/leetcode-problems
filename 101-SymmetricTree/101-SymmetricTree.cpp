// Last submission: 11/22/2023, 6:59:43 PM
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
    bool checkIsSymmetric(TreeNode* root1, TreeNode* root2) {
        if(root1 == nullptr && root2 == nullptr)
            return true;
        if(root1 && root2 && root1->val == root2->val){
            return checkIsSymmetric(root1->left, root2->right) 
                && checkIsSymmetric(root1->right, root2->left);
        }
        // if conditions don't apply, it is not symmetric
        return false;
    };
    bool isSymmetric(TreeNode* root) {
        return checkIsSymmetric(root, root);
    }
};
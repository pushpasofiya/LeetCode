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
    int height(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        return 1 + max(height(root->left), height(root->right));
    }

    bool isBalanced(TreeNode* root) {
        if (root == NULL) {
            return true;
        }

        if (root->left == NULL && root->right == NULL) {
            return true;
        }

        // A missing child alone does not mean unbalanced.
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        if (abs(leftHeight - rightHeight) > 1) {
            return false;
        }

        // Check the remaining nodes too.
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);

        if (left && right) {
            return true;
        }

        return false;
    }
};
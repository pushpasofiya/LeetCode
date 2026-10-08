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
    int minDepth(TreeNode* root) {
      if(root==NULL)
      {
        return 0;
      }
      int left_height=0;
      int right_height=0;
      if(root->left!=NULL)
      {
       left_height=minDepth(root->left);
      }
      if(root->right!=NULL)
      {
        right_height=minDepth(root->right);
      }
      if(left_height==0)
      {
        return right_height+1;
      }
      if(right_height==0)
      {
        return left_height+1;
      }
      return 1+min(left_height,right_height);
        
    }
};
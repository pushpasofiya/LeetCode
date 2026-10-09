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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
        {
            return true;
        }
        if(p==NULL || q==NULL)
        {
            return false;
        }
        bool left=true;
        bool right=true;
        if(p->val==q->val)
        {
            if(p->left!=NULL && q->left==NULL||(q->left!=NULL && p->left==NULL))
            {
                return false;
            }
            if(p->right!=NULL && q->right==NULL||(q->right!=NULL && p->right==NULL))
            {
                return false;
            }
            if(p->left!=NULL && q->left!=NULL ||(p->right!=NULL && q->right!=NULL) )
            {
                left=isSameTree(p->left,q->left);
                right=isSameTree(p->right,q->right);
            }
            else
            {
                return true;
            }
        }
        else
        {
            return false;
        }
        if(left && right)
        {
        return true;
        }
        return false;
    }
};
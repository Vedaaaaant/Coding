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
    int depth(TreeNode* root)
    {
        if(!root)
        {
            return 0 ;
        }
        return 1 + max(depth(root->left),depth(root->right));
    }
    int ans(TreeNode* root , int depth)
    {
        if(!root) return 0 ;
        if(depth == 1) return root->val;
        return ans(root->right,depth-1) + ans(root->left,depth-1);
    }
    int deepestLeavesSum(TreeNode* root) 
    {
        int height  = depth(root);
        int res = ans(root,height);
        return res ;
    }
};
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
    int ans;
    int val;
    void func(TreeNode* root , int &val)
    {
        if(root==NULL)
            return ;
        func(root->left,val);
        val--;
        if(val==0)
            ans=root->val;
        func(root->right,val);
    }
    int kthSmallest(TreeNode* root, int x)
    {
        val = x;
        func(root,val);
        return ans;
    }
};
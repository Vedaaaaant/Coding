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
    void help(TreeNode* root, int& pre , int& ans)
    {
      if(root)
      {
        help(root->left,pre,ans);
        if(pre != -1)
        {
          ans = min(ans,root->val-pre);
        }
        pre = root->val;
        help(root->right,pre,ans);
      } 
    }
    int minDiffInBST(TreeNode* root)
    {
       int pre = -1 ;
       int ans = INT_MAX ;
       help(root,pre,ans);
       return ans;
    }
};
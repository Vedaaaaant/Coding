
class Solution {
public:
    int maxpath(TreeNode* root , int &maxi)
    {
      if(root == NULL)
        return 0;
      int left = max(0,maxpath(root->left,maxi));
      int right = max(0,maxpath(root->right,maxi));
      maxi = max(maxi,root->val+left+right);
      return root->val + max(left,right);
    }
    int maxPathSum(TreeNode* root)
    {
        int maxi = INT_MIN ;
        maxpath(root,maxi);
        return maxi;
    }
};
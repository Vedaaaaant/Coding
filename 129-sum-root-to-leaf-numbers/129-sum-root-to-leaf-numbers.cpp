class Solution {
public:
    int ans(TreeNode* root , int curr)
    {
      if(root == NULL)
      {
        return 0 ;
      }
      curr = curr*10 + root->val;
      if(root->right == NULL && root->left == NULL)
      {
        return curr ;
      }
      return ans(root->right,curr) + ans(root->left,curr);
    }
    int sumNumbers(TreeNode* root) {
        return ans(root,0);
    }
};


class Solution {
public:
    int widthOfBinaryTree(TreeNode* root)
    {
       if(root == NULL)
       {
         return 0 ;
       }
       queue<pair<TreeNode*,int>> q ;
       q.push({root,0});
       int ans = 1 ;
       while(!q.empty())
       {
         int size = q.size();
         int first , last ;
         int minn = q.front().second;
         for(int i = 0 ; i < size ; i++)
         {
           int curr_ind = q.front().second - minn ;
           TreeNode* node = q.front().first;
           q.pop();
           if(i==0){
             first = curr_ind;
           }
           if(i==size-1){
             last = curr_ind;
           }
           if(node->left)
           {
             q.push({node->left, (long long)2 * curr_ind + 1});
           }
           if(node->right)
           {
             q.push({node->right, (long long)2 * curr_ind + 2});
           }
         }
         ans = max(ans, last-first + 1);
       }
      return ans;
    }
};
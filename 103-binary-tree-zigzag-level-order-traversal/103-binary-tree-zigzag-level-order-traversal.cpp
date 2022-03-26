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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
      vector<vector<int>> ans;
        if(root == NULL)
            return ans;
       queue<TreeNode*> q ;
       q.push(root);
       int len = 0 ;
       bool flag = false ;
       while(!q.empty())
       {
           len = q.size();
           vector<int> v ;
           for(int i= len ; i > 0 ; i--)
           {
               TreeNode* top = q.front();
               q.pop();
               if(top->left != NULL) q.push(top->left);
               if(top->right != NULL) q.push(top->right);
               v.push_back(top->val);
           }
           if(flag)
           {
               reverse(v.begin(),v.end());
           }
           ans.push_back(v);
           flag =! flag;
       }
        return ans;
    }
};
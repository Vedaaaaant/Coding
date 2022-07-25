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
    int findBottomLeftValue(TreeNode* root)
    {
        int bottom = 0 ;
        vector<int> ans ;
        if(root == NULL)
        {
            return 0 ;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int len = q.size();
            for(int i = 0 ; i < len ; i++)
            {
               TreeNode* temp = q.front();
               q.pop();
               if(i==0){
                   ans.push_back(temp->val);
               }
               if(temp-> left != NULL){
                    q.push(temp->left);
               }
               if(temp->right != NULL){
                    q.push(temp->right);
               }
            }
        }
        int n = ans.size();
        bottom = ans[n-1];
        return bottom;
    }
};
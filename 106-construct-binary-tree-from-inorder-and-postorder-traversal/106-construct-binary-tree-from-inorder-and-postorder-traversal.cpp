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
    void createmap(vector<int> in , map<int,int>& helper , int n)
    {
        for(int i = 0 ; i < n ; i++)
        {
            helper[in[i]] = i ;
        }
    }
    TreeNode* solve(vector<int>& in , vector<int>& post , int& index , int is , int ie , map<int,int>& helper)
    {
        if(index<0 || is>ie )
        {
            return NULL;
        }
    
        TreeNode* root = new TreeNode(post[index--]);
        int position = helper[root->val];
        root->right = solve(in,post,index,position+1,ie,helper);
        root->left = solve(in ,post,index,is,position-1,helper);
        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int n = in.size();
        int index = n-1;
        map<int,int> helper ;
        createmap(in,helper,n);
        
        TreeNode* ans = solve(in,post,index,0,n-1,helper);
        return ans;
    }
};
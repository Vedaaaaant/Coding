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
    int Hieght(TreeNode* root)
    {
        if(root==NULL)
            return 0 ;
        return 1+max(Hieght(root->left),Hieght(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
       if(root==NULL)
           return 0;
        int d1 = Hieght(root->left) + Hieght(root->right);
        int d2 = diameterOfBinaryTree(root->left);
        int d3 = diameterOfBinaryTree(root->right);
        return max(d1,max(d2,d3));
    }
};
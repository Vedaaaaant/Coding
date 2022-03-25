
class Solution {
public:
    int preIndex = 0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
    {
        int is = 0 ;
        int ie = inorder.size()-1;
        return build(preorder,inorder,is,ie);
    }
    TreeNode* build(vector<int>& preorder , vector<int> & inorder , int is , int ie)
    {
        if(is>ie)
            return NULL;
        TreeNode* root = new TreeNode(preorder[preIndex++]);
        int intIndex = 0 ;
        for(int i = is ; i <= ie ; i++)
        {
            if(inorder[i] == root->val)
            {
                intIndex = i ;
                break;
            }
        }
        root->left = build(preorder,inorder,is,intIndex-1);
        root->right = build(preorder,inorder,intIndex+1,ie);
        return root;
    }
};
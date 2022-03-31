
class Solution {
public:
    bool inorder(TreeNode* root,int x , unordered_set<int> &s)
    {
        if(root==NULL)
            return false;
        if(inorder(root->left,x,s)==true)
            return true;
        if(s.find(x-root->val) != s.end())
            return true;
        else
            s.insert(root->val);
        return inorder(root->right,x,s);
    }
    bool findTarget(TreeNode* root, int x) 
    {
        unordered_set<int> s ;
        return inorder(root,x,s);
    }
};
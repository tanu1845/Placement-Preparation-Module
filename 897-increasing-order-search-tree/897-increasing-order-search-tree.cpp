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
    
    void help(TreeNode*root,TreeNode*&t)
    {
        if(root==NULL)
            return ;
        help(root->left,t);
        TreeNode*N=new TreeNode(root->val);
        t->right=N;
        t=t->right;
        help(root->right,t);
        return;
    }
    
    TreeNode* increasingBST(TreeNode* root) 
    {
        if(root==NULL)    
            return NULL;
        TreeNode*temp=new TreeNode(0);
        TreeNode*t=temp;
        help(root,t);
        return temp->right;
    }
};
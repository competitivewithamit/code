class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return nullptr;
        
        // get the root of respective subtrees
        TreeNode* left = invertTree(root->left);
        TreeNode* right = invertTree(root->right);
        
        // swap the subtrees
        root->left = right;
        root->right = left;
        
        return root;
    }
};

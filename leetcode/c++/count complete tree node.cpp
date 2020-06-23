class Solution {
public:
    int cnt=0;
    int countNodes(TreeNode* root) {
        call(root);
        return cnt;
    }
    void call(TreeNode* root)
    {
        if(!root) return;  
        cnt++;  
        call(root->left);
        call(root->right); 
    }
};

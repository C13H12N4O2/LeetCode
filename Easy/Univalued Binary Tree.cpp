class Solution {
public:
    bool compare(const TreeNode const *root, const int &n) {
        if (root == nullptr)
            return true;
        
        if (root->val != n)
            return false;
        
        return compare(root->left, n) == true && compare(root->right, n);
    }
    
    bool isUnivalTree(TreeNode* root) {
        return compare(root, root->val);
    }
};

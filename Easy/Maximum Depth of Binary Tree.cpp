class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        
        int depth = 0;
        depth = max(depth, max(maxDepth(root->left), maxDepth(root->right)));
        return depth + 1;
    }
};

class Solution {
public:
    void dfs(TreeNode* node, vector<int> &vec) {
        if (node == nullptr)
            return;
        if (node->left == nullptr && node->right == nullptr)
            vec.push_back(node->val);
        dfs(node->left, vec);
        dfs(node->right, vec);
    }  
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;
        dfs(root1, v1);
        dfs(root2, v2);
        return v1 == v2;
    }
};

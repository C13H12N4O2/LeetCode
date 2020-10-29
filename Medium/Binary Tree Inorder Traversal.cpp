class Solution {
private:
    vector<int> vec;
    
public:
    void search(TreeNode *node) {
        if (node == nullptr)
            return;
        search(node->left);
        vec.push_back(node->val);
        search(node->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        search(root);
        return vec;
    }
};

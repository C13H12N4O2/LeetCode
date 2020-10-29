class Solution {
private:
    TreeNode* res;
    
public:
    void search(TreeNode *node, int &val) {
        if (node == nullptr)
            return;
        if (node->val == val) {
            res = node;
            return;
        }
        search(node->left, val);
        search(node->right, val);
    }
    
    TreeNode* searchBST(TreeNode* root, int val) {
        search(root, val);
        return res;
    }
};

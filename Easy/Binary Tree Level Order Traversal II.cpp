class Solution {
private:
    vector<vector<int>> arr;
    
public:
    void build(const TreeNode *root, const int &depth) {
        if (root == nullptr)
            return ;
        if (arr.size() == depth)
            arr.push_back(vector<int>());
        
        arr[depth].push_back(root->val);
        build(root->left, depth + 1);
        build(root->right, depth + 1);
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        build(root, 0);
        reverse(arr.begin(), arr.end());
        return arr;
    }
};

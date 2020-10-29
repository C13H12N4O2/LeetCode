class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res = 0;
        for (int i = grid.size() - 1; i != -1; --i) {
            for (int j = grid[i].size() - 1; j != -1; --j) {
                if (grid[i][j] >= 0)
                    break;
                ++res;
            }
        } return res;
    }
};

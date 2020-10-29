class Solution {
private:
    vector<vector<bool>> visit;
    
public:
    int uf(int row, int col, vector<vector<int>> &grid) {
        visit[row][col] = true;
        
        int area = 0;
        if (row > 0 && !visit[row - 1][col] && grid[row - 1][col] == 1)
            area += uf(row - 1, col, grid);
        if (col > 0 && !visit[row][col - 1] && grid[row][col - 1] == 1)
            area += uf(row, col - 1, grid);
        if (row < grid.size() - 1 && !visit[row + 1][col] && grid[row + 1][col] == 1)
            area += uf(row + 1, col, grid);
        if (col < grid[0].size() - 1 && !visit[row][col + 1] && grid[row][col + 1] == 1)
            area += uf(row, col + 1, grid);
        
        return area + 1;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        visit = vector(grid.size(), vector(grid[0].size(), false));
        int mx = 0;
        
        for (int i = 0; i != grid.size(); ++i) {
            for (int j = 0; j != grid[0].size(); ++j) {
                if (grid[i][j] == 1 && visit[i][j] == false) {
                    mx = max(mx, uf(i, j, grid));
                }
            }
        } return mx;
    }
};

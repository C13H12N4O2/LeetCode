class Solution {
private:
    vector<vector<bool>> visit;
    
public:
    void uf(int row, int col, vector<vector<char>> &grid) {
        visit[row][col] = true;
        
        if (row > 0 && !visit[row - 1][col] && grid[row - 1][col] == '1')
            uf(row - 1, col, grid);
        if (col > 0 && !visit[row][col - 1] && grid[row][col - 1] == '1')
            uf(row, col - 1, grid);
        if (row < grid.size() - 1 && !visit[row + 1][col] && grid[row + 1][col] == '1')
            uf(row + 1, col, grid);
        if (col < grid[0].size() - 1 && !visit[row][col + 1] && grid[row][col + 1] == '1')
            uf(row, col + 1, grid);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        visit = vector(grid.size(), vector(grid[0].size(), false));
        int res = 0;
        for (int i = 0; i != grid.size(); ++i) {
            for (int j = 0; j != grid[i].size(); ++j) {
                if (grid[i][j] == '1' && visit[i][j] == false) {
                    ++res;
                    uf(i, j, grid);
                }
            }
        } return res;
    }
};

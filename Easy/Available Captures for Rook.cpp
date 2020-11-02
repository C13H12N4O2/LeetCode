class Solution {
public:
    int move(vector<vector<char>> &board, int row, int col, char dir) {
        if (row < 0 || col < 0 || row > board.size() - 1 || col > board[0].size() - 1 || board[row][col] == 'B')
            return 0;
        if (board[row][col] == 'p')
            return 1;
        if (dir == 'r')
            return move(board, row, col + 1, dir);
        else if (dir == 'l')
            return move(board, row, col - 1, dir);
        else if (dir == 'u')
            return move(board, row + 1, col, dir);
        else
            return move(board, row - 1, col, dir);
    }
    
    int numRookCaptures(vector<vector<char>>& board) {
        int row, col;
        for (int i = 0; i != board.size(); ++i) {
            for (int j = 0; j != board[i].size(); ++j) {
                if (board[i][j] == 'R') {
                    row = i, col = j;
                    break;
                }
            }
        } return move(board, row, col + 1, 'r') + move(board, row, col - 1, 'l') + move(board, row + 1, col, 'u') + move(board, row - 1, col, 'd');
    }
};

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int answer = 0;
        
        for (decltype(matrix.size()) i = 0; i != matrix.size(); ++i) {
            for (decltype(matrix[0].size()) j = 0; j != matrix[0].size(); ++j) {
                if (i > 0 && j > 0 && matrix[i][j] != 0) {
                    matrix[i][j] = min(matrix[i][j - 1], min(matrix[i - 1][j], matrix[i - 1][j - 1])) + 1;
                } answer += matrix[i][j];
            }
        } return answer;
    }
};

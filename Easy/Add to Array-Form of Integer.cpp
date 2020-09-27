class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int> answer;
        int i = A.size() - 1, flag = 0;
        
        while (i >= 0 || K > 0 || flag > 0) {
            if (i >= 0)
                flag += A[i--];
            
            if (K > 0) {
                flag += K % 10;
                K /= 10;
            }
            
            answer.push_back(flag % 10);
            flag /= 10;
        }
        
        reverse(answer.begin(), answer.end());
        return answer;
    }
};

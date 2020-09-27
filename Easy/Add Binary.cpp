class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() - 1, flag = 0;
        string answer;
        
        while (i >= 0 || j >= 0 || flag > 0) {
            if (i >= 0)
                flag += a[i--] - '0';
            
            if (j >= 0)
                flag += b[j--] - '0';
            
            answer += flag % 2 + '0';
            flag /= 2;
        }
        
        reverse(answer.begin(), answer.end());
        return answer;
    }
};

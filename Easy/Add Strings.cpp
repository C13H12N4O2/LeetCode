class Solution {
public:
    string addStrings(string num1, string num2) {
        string answer;
        int i = num1.size() - 1, j = num2.size() - 1, flag = 0;
        
        while (i >= 0 || j >= 0 || flag  > 0) {
            if (i >= 0)
                flag += num1[i--] - '0';
            
            if (j >= 0)
                flag += num2[j--] - '0';
            
            answer += flag % 10 + '0';
            flag /= 10;
        }
        
        reverse(answer.begin(), answer.end());
        return answer;
    }
};

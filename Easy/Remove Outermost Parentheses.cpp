class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<char> basket;
        string answer;
        
        for (decltype(S.size()) i = 0; i != S.size(); ++i) {
            if (basket.empty()) {
                basket.push(S[i]);
            } else {
                if (basket.top() != S[i]) {
                    if (basket.size() != 1) {
                        answer += S[i];
                    } basket.pop();
                } else {
                    basket.push(S[i]);
                    answer += S[i];
                }
            }
        } return answer;
    }
};

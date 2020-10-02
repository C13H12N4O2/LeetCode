class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int answer = 0;
        
        for (decltype(prices.size()) i = 1; i != prices.size(); ++i) {
            answer += max(prices[i] - prices[i - 1], 0);
        } return answer;
    }
};

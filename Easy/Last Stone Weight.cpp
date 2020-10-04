class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
            sort(stones.begin(), stones.end());
            
            if (*(stones.end() - 1) - *(stones.end() - 2) == 0) {
                stones.pop_back();
                stones.pop_back();
            } else {
                *(stones.end() - 2) = *(stones.end() - 1) - *(stones.end() - 2);
                stones.pop_back();
            }
        }
        
        if (stones.empty())
            return 0;
        return stones.front();
    }
};

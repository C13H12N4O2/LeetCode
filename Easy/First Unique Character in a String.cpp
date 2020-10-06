class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mp;
        int target = 1, low = INT_MAX;
        
        for (const auto &c : s)
            ++mp[c];
        
        for (const auto &itr : mp) {
            if (itr.second == target)
                low = min(low, static_cast<int>(find(s.begin(), s.end(), itr.first) - s.begin()));
        } return low != INT_MAX ? low : -1;
    }
};

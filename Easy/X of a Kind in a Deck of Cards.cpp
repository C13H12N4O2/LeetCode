class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> count;
        int gcd = 0;
        
        for (const int &i : deck) {
            ++count[i];
        }
        
        for (const auto &iter : count) {
            gcd = __gcd(iter.second, gcd);
        } return gcd > 1;
    }
};

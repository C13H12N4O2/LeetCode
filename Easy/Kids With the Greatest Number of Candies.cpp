class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> vec(candies.size(), true);
        int mx = 0;
        for (const auto &candy : candies)
            mx = max(candy, mx);
        for (int i = 0; i != candies.size(); ++i)
            if (candies[i] + extraCandies < mx)
                vec[i] = false;
        return vec;
    }
};

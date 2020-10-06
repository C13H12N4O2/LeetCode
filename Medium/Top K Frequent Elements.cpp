class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<pair<int, int>> cnt;
        vector<int> res;
        
        for (const auto &i : nums)
            ++mp[i];
        
        for (const auto &itr : mp)
            cnt.push_back(make_pair(itr.first, itr.second));
        sort(cnt.begin(), cnt.end(), [](const pair<int, int> &a, const pair<int, int> &b){return a.second > b.second;});
        
        for (size_t i = 0; i != k; ++i)
            res.push_back(cnt[i].first);
        
        return res;
    }
};

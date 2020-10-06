class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        vector<pair<int, string>> vec;
        vector<string> res;
        
        for (const auto &word : words)
            ++mp[word];
        
        for (const auto &itr : mp)
            vec.push_back(make_pair(itr.second, itr.first));
        sort(vec.begin(), vec.end(), [](pair<int, string> &a, pair<int, string> &b){return a.first == b.first ? a.second < b.second : a.first > b.first;});
        
        vector<pair<int, string>>::iterator beg = vec.begin(), end = vec.end();
        for (int i = 0; i != k && beg != end; ++i, ++beg)
            res.push_back(beg->second);
        return res;
    }
};

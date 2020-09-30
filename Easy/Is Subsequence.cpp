class Solution {
public:
    bool isSubsequence(string s, string t) {
        decltype(t.size()) i, j;
        for (i = 0, j = 0; i != t.size() && j != s.size(); ++i) {
            if (s[j] == t[i])
                ++j;
        } return j == s.size() ? true : false;
    }
};
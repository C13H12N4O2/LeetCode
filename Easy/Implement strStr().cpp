class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty() || haystack == needle)
            return 0;
        if (haystack.empty() || haystack.size() < needle.size())
            return -1;
        
        string carry;
        int point = 0;
        for (decltype(needle.size()) i = 0; i != needle.size(); ++i)
            carry.push_back(haystack[i]);
        
        for (decltype(needle.size()) i = needle.size(); i != haystack.size() + 1; ++i) {
            if (carry == needle)
                return point;
            carry.push_back(haystack[i]);
            carry.erase(carry.begin());
            ++point;
        } return -1;
    }
};

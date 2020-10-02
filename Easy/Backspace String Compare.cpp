class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s, t;
        string a, b;
        
        for (decltype(S.size()) i = 0; i != S.size(); ++i) {
            if (S[i] == '#') {
                if (!s.empty()) {
                    s.pop();
                }
            } else {
                s.push(S[i]);
            }
        }
            
        for (decltype(T.size()) i = 0; i != T.size(); ++i) {
            if (T[i] == '#') {
                if (!t.empty()) {
                    t.pop();
                }
            } else {
                t.push(T[i]);
            }
        }
        
        if (s.empty() && t.empty())
            return true;
        if (s.size() != t.size())
            return false;
        
        while (!s.empty()) {
            a += s.top();
            s.pop();
        }
        
        while (!t.empty()) {
            b += t.top();
            t.pop();
        } return a == b;
    }
};

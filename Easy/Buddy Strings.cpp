class Solution {
public:
    bool buddyStrings(string A, string B) {
        if (A.size() != B.size())
            return false;
        
        if (A == B && set<char>(A.begin(), A.end()).size() < A.size())
            return true;
        
        vector<int> dif;
        for (decltype(A.size()) i = 0; i != A.size(); ++i)
            if (A[i] != B[i])
                dif.push_back(i);
        
        return dif.size() == 2 && A[dif[0]] == B[dif[1]] && A[dif[1]] == B[dif[0]];
    }
};

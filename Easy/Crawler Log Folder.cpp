class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> dir;
        
        for (const auto &s : logs) {
            if (s == "../") {
                if (!dir.empty()) {
                    dir.pop();
                }
            } else if (s == "./") {
                continue;
            } else {
                dir.push(s);
            }
        } return dir.size();
    }
};

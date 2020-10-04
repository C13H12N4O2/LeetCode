class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> money(3, 0);
        
        for (const auto &i : bills) {
            if (i == 5) {
                ++money[0];
            } else if (i == 10) {
                if (money[0] >= 1) {
                    --money[0];
                    ++money[1];
                } else {
                    return false;
                }
            } else if (i == 20) {
                if ((money[0] >= 1 && money[1] >= 1)) {
                    --money[0]; --money[1];
                    ++money[2];
                } else if (money[0] >= 3) {
                    money[0] -= 3;
                } else {
                    return false;
                }
            }
        } return true;
    }
};

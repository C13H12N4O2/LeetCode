class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for (int i = 0; i != n; ++i) {
            if (*(nums.begin() + j) == 0) {
                nums.push_back(*(nums.begin() + j));
                nums.erase(nums.begin() + j);
            } else {
                ++j;
            }
        }
    }
};

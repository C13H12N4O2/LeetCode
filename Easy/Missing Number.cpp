class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing = nums.size();
        for (decltype(nums.size()) i = 0; i != nums.size(); ++i) {
            missing ^= nums[i];
            missing ^= i;
        } return missing;
    }
};

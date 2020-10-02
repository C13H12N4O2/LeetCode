class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty())
            return 0;
        if (nums.size() == 1)
            return nums.back();
        if (nums.size() == 2)
            return max(nums[0], nums[1]);
        
        vector<int> dp1(nums.size());
        vector<int> dp2(nums.size());
        
        dp1[0] = nums[0];
        dp1[1] = nums[0];
        dp2[0] = 0;
        dp2[1] = nums[1];
        
        for (int i = 2; i != nums.size() - 1; ++i) {
            dp1[i] = max(dp1[i - 2] + nums[i], dp1[i - 1]);
            dp2[i] = max(dp2[i - 2] + nums[i], dp2[i - 1]);
        }
        
        dp1.pop_back();
        dp2[nums.size() - 1] = max(dp2[nums.size() - 3] + nums[nums.size() - 1], dp2[nums.size() - 2]);
        
        return max(dp1.back(), dp2.back());
    }
};

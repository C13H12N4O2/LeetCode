class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        
        for (size_t i = 0; i != nums.size(); ++i) {
            for (size_t j = 0; j != nums.size(); ++j) {
                if (i != j && nums[i] > nums[j])
                    ++res[i];
            }
        } return res;
    }
};

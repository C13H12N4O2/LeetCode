class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int dup = 0, acc1 = 0, acc2 = 0;
        
        for (int i = 0; i != nums.size(); ++i)
            dup ^= (i + 1) ^ nums[i];
        
        dup &= -dup;
        
        for (int i = 0; i != nums.size(); ++i) {
            nums[i] & dup ? acc2 ^= nums[i] : acc1 ^= nums[i];
            i + 1 & dup ? acc2 ^= i + 1 : acc1 ^= i + 1;
        }
        
        for (auto n : nums)
            if (n == acc1)
                return {acc1, acc2};
        return {acc2, acc1};
    }
};

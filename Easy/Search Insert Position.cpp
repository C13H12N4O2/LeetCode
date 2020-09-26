class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, mid, high = nums.size() - 1;
        
        while (low <= high) {
            mid = (high - low) / 2 + low;
            
            if (nums[mid] >= target)
                high = mid - 1;
            else
                low = mid + 1;
        } return low;
    }
};

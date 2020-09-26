class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, mid = 0, high = n;
        
        while (high > low) {
            mid = (high - low) / 2 + low;
            
            if (isBadVersion(mid))
                high = mid;
            else
                low = mid + 1;
        } return low;
    }
};

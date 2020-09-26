class Solution {
public:
    int guessNumber(int n) {
        int low = 0, mid, high = n, prophesy;
        
        while (true) {
            mid = (high - low) / 2 + low;
            
            prophesy = guess(mid);
            if (prophesy == 1)
                low = mid + 1;
            else if (prophesy == -1)
                high = mid - 1;
            else
                return mid;
        }
    }
};

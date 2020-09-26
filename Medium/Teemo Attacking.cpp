class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int PoisonedDuration = 0, start = 0, end = 0;
        
        for (const auto &time : timeSeries) {
            if (time > end) {
                PoisonedDuration += end - start;
                start = time;
            } end = time + duration;
        } return PoisonedDuration + end - start;
    }
};

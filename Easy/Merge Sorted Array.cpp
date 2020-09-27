class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n == 0)
            return ;
        if (m == 0)
            nums1 = nums2;
        for (int i = nums1.size() - n, j = 0; i != m + n; ++i, ++j) {
            nums1[i] = nums2[j];
        } sort(nums1.begin(), nums1.end());
    }
};

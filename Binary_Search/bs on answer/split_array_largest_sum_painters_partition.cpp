class Solution {
    int countParts(const vector<int>& nums, int limit) {
        int parts = 1;
        long long sum = 0;

        for (int x : nums) {
            if (sum + x > limit) {
                ++parts;
                sum = x;
            } else {
                sum += x;
            }
        }
        return parts;
    }

public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (countParts(nums, mid) <= k) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};

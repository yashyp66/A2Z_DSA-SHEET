class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        // count[x] = number of size-k subarrays
        // containing x
        vector<int> count(51, 0);

        // Generate every subarray of size k
        for (int i = 0; i <= n - k; i++) {

            set<int> present;

            // Elements inside current subarray
            for (int j = i; j < i + k; j++) {
                present.insert(nums[j]);
            }

            // Count each distinct element only once
            for (int x : present) {
                count[x]++;
            }
        }

        // Find the largest integer appearing
        // in exactly one subarray
        for (int x = 50; x >= 0; x--) {
            if (count[x] == 1) {
                return x;
            }
        }

        return -1;
    }
};

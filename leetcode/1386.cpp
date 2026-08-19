class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        unordered_map<int, int> mp;

        // Store reserved seats as a bitmask for each row
        for (auto &seat : reservedSeats) {
            int row = seat[0];
            int col = seat[1];

            mp[row] |= (1 << col);
        }

        int ans = (n - mp.size()) * 2;

        // Masks for the three possible blocks
        int left  = (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5);
        int middle = (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7);
        int right = (1 << 6) | (1 << 7) | (1 << 8) | (1 << 9);

        for (auto &[row, mask] : mp) {

            bool canLeft = !(mask & left);
            bool canMiddle = !(mask & middle);
            bool canRight = !(mask & right);

            if (canLeft && canRight) {
                // Can place two groups
                ans += 2;
            }
            else if (canLeft || canMiddle || canRight) {
                // Can place one group
                ans += 1;
            }
        }

        return ans;
    }
};

class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int l = 0;
        int ones = 0;

        string ans = "";

        for (int r = 0; r < n; r++) {

            if (s[r] == '1')
                ones++;

            while (ones == k) {

                // Remove unnecessary leading zeros
                while (l <= r && s[l] == '0')
                    l++;

                string curr = s.substr(l, r - l + 1);

                // Update answer
                if (ans == "" ||
                    curr.size() < ans.size() ||
                    (curr.size() == ans.size() && curr < ans)) {
                    ans = curr;
                }

                // Move past the first 1
                if (s[l] == '1')
                    ones--;

                l++;
            }
        }

        return ans;
    }
};

class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9 + 7;
        int n = s.size();

        vector<long long> dp(n + 1);
        vector<int> last(26, -1);

        dp[0] = 1;  // empty subsequence

        for (int i = 1; i <= n; i++) {
            int ch = s[i - 1] - 'a';

            dp[i] = (2 * dp[i - 1]) % MOD;

            if (last[ch] != -1) {
                dp[i] = (dp[i] - dp[last[ch]] + MOD) % MOD;
            }

            last[ch] = i - 1;
        }

        return (dp[n] - 1 + MOD) % MOD;
    }
};

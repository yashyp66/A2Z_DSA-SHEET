class Solution {
public:
    struct State {
        long long score = 0;
        array<int, 4> ids{};
        int len = 0;
    };

    // Returns true if a is lexicographically smaller than b
    bool smaller(const State& a, const State& b) {
        int len = min(a.len, b.len);

        for (int i = 0; i < len; i++) {
            if (a.ids[i] != b.ids[i]) {
                return a.ids[i] < b.ids[i];
            }
        }

        return a.len < b.len;
    }

    // Insert original index in sorted order
    State addIndex(const State& s, int id) {
        State res = s;

        int pos = 0;

        while (pos < res.len && res.ids[pos] < id) {
            pos++;
        }

        for (int i = res.len; i > pos; i--) {
            res.ids[i] = res.ids[i - 1];
        }

        res.ids[pos] = id;
        res.len++;

        return res;
    }

    vector<int> maximumWeight(vector<vector<int>>& intervals) {

        int n = intervals.size();

        // Store:
        // start, end, weight, original index

        vector<array<int, 4>> a(n);

        for (int i = 0; i < n; i++) {
            a[i] = {
                intervals[i][0],
                intervals[i][1],
                intervals[i][2],
                i
            };
        }

        // Sort by starting time
        sort(a.begin(), a.end());

        // next[i] = first interval whose start > a[i].end
        vector<int> next(n);

        vector<int> starts(n);

        for (int i = 0; i < n; i++) {
            starts[i] = a[i][0];
        }

        for (int i = 0; i < n; i++) {

            next[i] = upper_bound(
                starts.begin(),
                starts.end(),
                a[i][1]
            ) - starts.begin();
        }

        // dp[i][k]:
        // Best answer from interval i onward
        // when we can choose at most k intervals.

        vector<array<State, 5>> dp(n + 1);

        for (int i = n - 1; i >= 0; i--) {

            for (int k = 1; k <= 4; k++) {

                // Option 1: Skip current interval
                State skip = dp[i + 1][k];

                // Option 2: Take current interval
                State take = dp[next[i]][k - 1];

                take.score += a[i][2];

                take = addIndex(take, a[i][3]);

                // Choose better answer
                if (take.score > skip.score) {
                    dp[i][k] = take;
                }
                else if (take.score < skip.score) {
                    dp[i][k] = skip;
                }
                else {
                    // Same score:
                    // choose lexicographically smaller indices
                    if (smaller(take, skip)) {
                        dp[i][k] = take;
                    }
                    else {
                        dp[i][k] = skip;
                    }
                }
            }
        }

        vector<int> ans;

        for (int i = 0; i < dp[0][4].len; i++) {
            ans.push_back(dp[0][4].ids[i]);
        }

        return ans;
    }
};
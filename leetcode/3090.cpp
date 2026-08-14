#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int> freq(26, 0);
        int l = 0, ans = 0;

        for (int r = 0; r < s.size(); r++) {
            freq[s[r] - 'a']++;

            // Shrink window if any character appears more than 2 times
            while (freq[s[r] - 'a'] > 2) {
                freq[s[l] - 'a']--;
                l++;
            }

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};

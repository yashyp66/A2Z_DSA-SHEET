class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.size();

        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'a']++;
        }

        // Try the rightmost position first
        for (int i = n - 1; i >= 0; i--) {

            // Remove target[0 ... i-1]
            vector<int> rem = freq;

            bool possible = true;

            for (int j = 0; j < i; j++) {
                int c = target[j] - 'a';

                if (rem[c] == 0) {
                    possible = false;
                    break;
                }

                rem[c]--;
            }

            // Prefix target[0...i-1] cannot be formed
            if (!possible)
                continue;

            // Find smallest available character > target[i]
            int cur = target[i] - 'a';

            for (int c = cur + 1; c < 26; c++) {

                if (rem[c] > 0) {

                    string ans = target;

                    // Make the first difference here
                    ans[i] = char('a' + c);
                    rem[c]--;

                    // Fill suffix with smallest characters
                    int pos = i + 1;

                    for (int ch = 0; ch < 26; ch++) {
                        while (rem[ch] > 0) {
                            ans[pos++] = char('a' + ch);
                            rem[ch]--;
                        }
                    }

                    return ans;
                }
            }
        }

        return "";
    }
};
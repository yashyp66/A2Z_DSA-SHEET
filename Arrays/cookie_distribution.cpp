#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0;
        int cnt = 0;

        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                cnt++;
                i++;
                j++;
            } else {
                j++;
            }
        }

        return cnt;
    }
};

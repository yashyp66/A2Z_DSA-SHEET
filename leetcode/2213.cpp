#include <bits/stdc++.h>
using namespace std;

class Solution {
    struct Node {
        int len = 0;
        int pref = 0;
        int suff = 0;
        int best = 0;
        char lc = 0;
        char rc = 0;
    };

    vector<Node> seg;
    string s;
    int n;

    Node merge(Node a, Node b) {
        if (a.len == 0) return b;
        if (b.len == 0) return a;

        Node res;
        res.len = a.len + b.len;
        res.lc = a.lc;
        res.rc = b.rc;

        res.pref = a.pref;
        if (a.pref == a.len && a.rc == b.lc)
            res.pref = a.len + b.pref;

        res.suff = b.suff;
        if (b.suff == b.len && a.rc == b.lc)
            res.suff = b.len + a.suff;

        res.best = max(a.best, b.best);
        if (a.rc == b.lc)
            res.best = max(res.best, a.suff + b.pref);

        return res;
    }

    void build(int idx, int l, int r) {
        if (l == r) {
            seg[idx] = {1, 1, 1, 1, s[l], s[l]};
            return;
        }

        int m = (l + r) / 2;
        build(idx * 2, l, m);
        build(idx * 2 + 1, m + 1, r);
        seg[idx] = merge(seg[idx * 2], seg[idx * 2 + 1]);
    }

    void update(int idx, int l, int r, int pos, char c) {
        if (l == r) {
            seg[idx] = {1, 1, 1, 1, c, c};
            return;
        }

        int m = (l + r) / 2;
        if (pos <= m)
            update(idx * 2, l, m, pos, c);
        else
            update(idx * 2 + 1, m + 1, r, pos, c);

        seg[idx] = merge(seg[idx * 2], seg[idx * 2 + 1]);
    }

public:
    vector<int> longestRepeating(string s_, string queryCharacters,
                                  vector<int>& queryIndices) {
        s = s_;
        n = s.size();

        seg.resize(4 * n);
        build(1, 0, n - 1);

        vector<int> ans;

        for (int i = 0; i < queryCharacters.size(); ++i) {
            int pos = queryIndices[i];
            char c = queryCharacters[i];

            if (s[pos] != c) {
                s[pos] = c;
                update(1, 0, n - 1, pos, c);
            }

            ans.push_back(seg[1].best);
        }

        return ans;
    }
};

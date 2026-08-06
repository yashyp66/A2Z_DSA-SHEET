#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int ans = 0;

        for (int i = 0; i + 1 < s.size();) {
            if (s[i] != s[i + 1]) {
                ans++;
                i += 2;
            } else {
                i++;
            }
        }

        cout << ans << '\n';
    }
}

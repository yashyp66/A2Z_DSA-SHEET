#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long sum = 0;
        int mn = INT_MAX;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            sum += x;
            mn = min(mn, x);
        }

        cout << sum - mn << "\n";
    }

    return 0;
}
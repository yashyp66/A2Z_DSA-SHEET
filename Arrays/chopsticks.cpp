#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long D;
    cin >> N >> D;

    vector<long long> L(N);
    for (int i = 0; i < N; ++i) {
        cin >> L[i];
    }

    sort(L.begin(), L.end());

    int ans = 0;
    int i = 0;

    while (i < N - 1) {
        if (L[i + 1] - L[i] <= D) {
            ans++;
            i += 2; // use both sticks
        } else {
            i += 1; // skip current stick
        }
    }

    cout << ans << '\n';
    return 0;
}

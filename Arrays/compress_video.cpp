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

        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        int ans = 1;
        for (int i = 1; i < N; i++)
            if (A[i] != A[i - 1]) ans++;

        cout << ans << '\n';
    }
    return 0;
}
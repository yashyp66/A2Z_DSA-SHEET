#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        unordered_map<int, int> freq;
        int mx = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            freq[x]++;
            mx = max(mx, freq[x]);
        }

        cout << N - mx << "\n";
    }

    return 0;
}
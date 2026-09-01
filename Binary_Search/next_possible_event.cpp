#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<long long, int>> starts; // {start time, original index}
    vector<long long> endTime(N);

    for (int i = 0; i < N; i++) {
        long long start, end;
        cin >> start >> end;

        starts.push_back({start, i});
        endTime[i] = end;
    }

    // Sort events according to start time
    sort(starts.begin(), starts.end());

    // Extract sorted start times
    vector<long long> startTimes;
    for (auto &event : starts) {
        startTimes.push_back(event.first);
    }

    vector<int> ans(N, -1);

    for (int i = 0; i < N; i++) {
        // Find first event whose start >= current event's end
        auto it = lower_bound(startTimes.begin(), startTimes.end(), endTime[i]);

        if (it != startTimes.end()) {
            int pos = it - startTimes.begin();
            ans[i] = starts[pos].second;
        }
    }

    // Output answers in original order
    for (int i = 0; i < N; i++) {
        cout << ans[i];
        if (i != N - 1)
            cout << " ";
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[arr[i]]++;
        }
        
        int max_freq = 0;
        int max_freq_count = 0;
        
        // Find the maximum frequency
        for (auto& it : mpp) {
            if (it.second > max_freq) {
                max_freq = it.second;
                max_freq_count = 1; // New maximum found
            } else if (it.second == max_freq) {
                max_freq_count++; // Another element has the same maximum frequency
            }
        }
        
        // A dominant element exists only if the maximum frequency is unique
        if (max_freq_count == 1) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}

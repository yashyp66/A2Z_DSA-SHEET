#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ans = n;
    cout << "Initial ans = " << ans << endl;

    for(int i = 0; i < n; i++) {
        ans ^= i;
        cout << "After XOR with " << i << " : " << ans << endl;

        ans ^= a[i];
        cout << "After XOR with " << a[i] << " : " << ans << endl;
    }

    cout << "Missing Number = " << ans << endl;
}

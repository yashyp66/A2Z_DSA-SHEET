#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        // Check if all sides are distinct
        if (a != b && b != c) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

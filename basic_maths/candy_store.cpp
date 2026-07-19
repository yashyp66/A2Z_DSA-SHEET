#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int X, Y;
        cin >> X >> Y;

        if (Y <= X)
            cout << Y << endl;
        else
            cout << X + 2 * (Y - X) << endl;
    }

    return 0;
}
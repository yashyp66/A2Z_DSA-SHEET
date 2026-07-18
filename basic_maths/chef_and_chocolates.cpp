#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int money = 5 * X + 10 * Y;
        cout << money / Z << endl;
    }

    return 0;
}
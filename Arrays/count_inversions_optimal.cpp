#include <bits/stdc++.h>
using namespace std;

int merge(vector<int>& a, int low, int mid, int high) {
    vector<int> temp;
    int cnt = 0;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (a[left] <= a[right]) {
            temp.push_back(a[left]);
            left++;
        }
        else {
            temp.push_back(a[right]);
            cnt += (mid - left + 1);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(a[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(a[right]);
        right++;
    }

    // Copy merged elements back into original array
    for (int i = low; i <= high; i++) {
        a[i] = temp[i - low];
    }

    return cnt;
}

int ms(vector<int>& a, int low, int high) {
    int cnt = 0;

    if (low >= high)
        return cnt;

    int mid = (low + high) / 2;

    cnt += ms(a, low, mid);
    cnt += ms(a, mid + 1, high);
    cnt += merge(a, low, mid, high);

    return cnt;
}

int numberOfInversions(vector<int>& a, int n) {
    return ms(a, 0, n - 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cnt = numberOfInversions(a, n);

    cout << cnt;

    return 0;
}

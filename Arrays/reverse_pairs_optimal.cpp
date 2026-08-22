#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right])
            temp.push_back(arr[left++]);
        else
            temp.push_back(arr[right++]);
    }

    while (left <= mid)
        temp.push_back(arr[left++]);

    while (right <= high)
        temp.push_back(arr[right++]);

    for (int i = low; i <= high; i++)
        arr[i] = temp[i - low];
}

int countPairs(vector<int>& arr, int low, int mid, int high) {
    int right = mid + 1;
    int cnt = 0;

    for (int i = low; i <= mid; i++) {

        while (right <= high && arr[i] > 2LL * arr[right]) {
            right++;
        }

        cnt += (right - (mid + 1));
    }

    return cnt;
}

int mergeSort(vector<int>& arr, int low, int high) {
    int cnt = 0;

    if (low >= high)
        return cnt;

    int mid = low + (high - low) / 2;

    cnt += mergeSort(arr, low, mid);

    cnt += mergeSort(arr, mid + 1, high);

    // Count reverse pairs
    cnt += countPairs(arr, low, mid, high);

    // Merge the two sorted halves
    merge(arr, low, mid, high);

    return cnt;
}

int reversePairs(vector<int>& a, int n) {
    return mergeSort(a, 0, n - 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cnt = reversePairs(a, n);

    cout << cnt << endl;

    return 0;
}

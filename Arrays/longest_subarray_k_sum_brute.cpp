#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k;
    cin>>k;
    int len=0;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=a[j];
            if(s==k){
                len=max(len,j-i+1);
            }
        }
    }
    cout<<len;
    return 0;
}

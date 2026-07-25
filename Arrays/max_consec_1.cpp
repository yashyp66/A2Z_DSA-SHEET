#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int count=0;
    int m=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            count++;
            m=max(m,count);
        }
        else{
            count=0;
        }
        
    }
    cout<<m;
}

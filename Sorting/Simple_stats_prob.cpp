#include <bits/stdc++.h>
using namespace std;
double avgak(vector<int>&a,int n,int k){
    sort(a.begin(),a.end());
    int x=n-2*k;
    int temp[x];
    int y=0;
    for(int i=k;i<n-k;i++){
        temp[y]=a[i];
        y++;
    }
    long long sum=0;
    for(int i=0;i<x;i++){
        sum+=temp[i];
    }
    return (double)sum/x;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        double avg = avgak(a,n,k);
        // your code goes here
        cout << fixed << setprecision(6) << avg << "\n";
        //cout<<avg<<"\n";
    }

}

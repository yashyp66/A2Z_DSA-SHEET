#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        long long s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        
        sort(s,s+n);
        long long minDiff=s[1]-s[0];
        // your code goes here
        for(int i=2;i<n;i++){
           minDiff= min(minDiff,s[i]-s[i-1]);
            
        }
        cout<<minDiff<<"\n";
    }
    
}

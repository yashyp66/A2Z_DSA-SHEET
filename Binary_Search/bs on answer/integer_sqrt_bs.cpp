#include<bits/stdc++.h>
long bsqrt(int n){
    long low=1;
    long high=n;
    long ans=1;
    while(low<=high){
        long mid=low+(high-low)/2;
        if(mid*mid<=n){
            ans=mid;
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return high;
}
using namespace std;
int  main(){
    long n;
    cin>>n;
    
    long ans=bsqrt(n);
    cout<<ans;
}

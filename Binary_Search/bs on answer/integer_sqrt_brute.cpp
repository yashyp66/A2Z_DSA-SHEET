#include<bits/stdc++.h>
long bsqrt(int n){
    long ans=1;
    for(int i=1;i<=n;i++){
        if(i*i<=n){
            ans=i;
        }
        else{
            break;
        }
    }
    return ans;
}
using namespace std;
int  main(){
    long n;
    cin>>n;
    
    long ans=bsqrt(n);
    cout<<ans;
}

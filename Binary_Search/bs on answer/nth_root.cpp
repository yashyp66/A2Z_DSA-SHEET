#include<bits/stdc++.h>
using namespace std;
double multiply(double a,int n){
    double ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*a;
    }
    return ans;
}
double getmroot(int n,int m){
    double low=1.0;
    double high=m;
    double eps=1e-6;
    while((high-low)>eps){
        double mid=low+(high-low)/2.0;
        if(multiply(mid,n)<m){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    return high;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    double ans;
    ans=getmroot(n,m);
    cout<<ans;
    return 0;
}

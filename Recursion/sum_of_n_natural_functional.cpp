#include<bits/stdc++.h>
using namespace std;

int sf(int n){
    if(n==0){
        return 0;
    }
    return n + sf(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sf(n);
    return 0;
}

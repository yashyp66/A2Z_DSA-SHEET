#include<bits/stdc++.h>
using namespace std;

int revn(int n){
    int ld;
    int rv=0;
    while(n>0){
        ld=n%10;
        n=n/10;
        rv= (rv*10)+ ld;
    }
    return rv;
}
int main(){
    int n ;
    cin>>n;
    cout<<revn(n);
    return 0;
}

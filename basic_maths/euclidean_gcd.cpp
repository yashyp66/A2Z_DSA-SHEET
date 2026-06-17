#include<bits/stdc++.h>
using namespace std;
void euclidean_gcd(int a,int b){
    int gcd = 1;
    while(a>0 && b>0){
        if(a>b) {a = a%b;}
        else{ b=b%a;}
        if(a==0){ gcd = b;}
        else {gcd = a;}
    }
    cout<<gcd;
}

int main(){
    int n ,m;
    cin>>n>>m;
    euclidean_gcd(n,m);
    return 0;
}

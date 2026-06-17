#include<bits/stdc++.h>
using namespace std;
int countd(int n){
    int ld;
    int c=0;
    while(n>0){
        ld= n%10;
       
        n=n/10;
         c++;
    }
    return c;
}
int main(){
    int n ;
    cin>>n;
    cout<<countd(n);
    return 0;
}

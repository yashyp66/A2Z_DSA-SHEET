#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    int c=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            c++;
            if((n/i)!= i ) c++;
        }
    }
    return c==2;
}

int main(){
    int n ;
    cin>>n;
    cout<<isprime(n);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n){
    int  x = n;
    int rev=0;
    int ld;
    while(x>0){
        ld= x %10;
        x=x/10;
        rev = rev*10 + ld;
    }
    if(rev==n){
        return true ;
    }
    else{
        return false;
    }
}

int main(){
    int n ;
    cin>>n;
    cout<<palindrome(n);
    return 0;
}

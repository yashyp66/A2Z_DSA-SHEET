#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n<=1) return n;
    int l=fib(n-1);
    int sl=fib(n-2);
    return l + sl;
}
int main(){
   int n;
   cin>>n;
   cout<<fib(n);
 
    return 0;
}

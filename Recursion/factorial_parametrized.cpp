#include<bits/stdc++.h>
using namespace std;
void factp(int i,long long fac){
    if(i<1){
        cout<<fac<<endl;
        return ;
    }
    factp(i-1,fac*i);
}
int main(){
    int n;
    cin>>n;
    factp(n,1);
    return 0;
}

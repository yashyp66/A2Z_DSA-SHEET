#include<bits/stdc++.h>
using namespace std;
void s(int i , int sum){
    if(i<1){
        cout<<sum;
        return ;
    }
    s(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    s(n);
    return 0;
}

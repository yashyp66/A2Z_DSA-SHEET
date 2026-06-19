#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
    if(i>n){
        return ;
    }
    cout<<"Hare_krishna_Hare_krishna_krishna_krishna_hare_hare_hare_rama_hare_rama_rama_rama_hare_hare"<<endl;
    f(i+1,n);
}
int main(){
    int n;
    cin>>n;
    f(1,n);
    return 0;
}

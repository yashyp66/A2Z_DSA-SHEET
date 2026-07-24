#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    int a1[n1];
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    int n2;
    cin>>n2;
    int a2[n2];
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(a1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(a2[i]);
    }
    int m=st.size();
    int u[m];
    int i=0;
    for(auto it: st){
        u[i++]=it;
    }
    for(int i=0;i<m;i++){
        cout<<u[i]<<" ";
    }
    return 0;
}

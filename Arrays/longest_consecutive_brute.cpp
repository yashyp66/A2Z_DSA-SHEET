#include<bits/stdc++.h>
using namespace std;
bool linearSearch(vector<int >&a,int target) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == target) {
            return true; // Target found, return current index
        }
    }
    return false; // Target not found after checking the whole array
}
int main(){
    int n ;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int largest=1;
    for(int i=0;i<n;i++){
        int x=a[i];
        int cnt=1;
        while(linearSearch(a,x +1)){
            x=x+1;
            cnt++;
            largest=max(largest,cnt);
        }
    }
    cout<<largest<<" ";
    return 0;
}

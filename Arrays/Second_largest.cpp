#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
int largest=arr[n-1];
int secl;
    for(int i=n-2;i>=0;i--){
        
        if(arr[i]!=largest){
            secl=arr[i];
            break;
        }
    }
    cout<<secl;
    return 0;
}

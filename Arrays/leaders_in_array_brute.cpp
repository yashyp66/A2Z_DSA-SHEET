#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        int leader=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            ans.push_back(arr[i]);
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}

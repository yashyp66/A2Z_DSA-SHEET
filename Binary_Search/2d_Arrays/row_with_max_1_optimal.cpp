#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>&arr,int n,int target){
    int low=0;int high=n-1;int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int cnt_max=0;
    int idx=-1;
    for(int i=0;i<n;i++){
        int cnt_ones=m-lower_bound(arr[i],m,1);
        if(cnt_ones>cnt_max){
            cnt_max=cnt_ones;
            idx=i;
        }
    }
    cout<<idx;
    
}

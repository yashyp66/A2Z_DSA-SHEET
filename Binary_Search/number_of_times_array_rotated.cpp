#include<bits/stdc++.h>
using namespace std;
int rotated(vector<int>&nums,int n){
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    int index=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[low]<=nums[high]){
            if(nums[low]<ans){
                ans=nums[low];
                index=low;
            }
            break;
        }
        if(nums[low]<=nums[mid]){
            if(nums[low]<ans){
                ans=nums[low];
                index=low;
            }
            low=mid+1;
        }
        else{
            if(nums[mid]<ans){
                ans=nums[mid];
                index=mid;
            }
            high=mid-1;
        }
    }
    return index;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int times=rotated(nums,n);
    cout<<times;
    return 0;
}

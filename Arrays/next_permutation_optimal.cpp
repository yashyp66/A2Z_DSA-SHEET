#include<bits/stdc++.h>
using namespace std;
void nextper(vector<int>&nums){
    int n=nums.size();
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(nums.begin(),nums.end());
        return;
    }
    for(int i=n-1;i>=0;i--){
        if(nums[i]>nums[idx]){
            swap(nums[i],nums[idx]);
            break;
        }
    }
    reverse(nums.begin()+idx+1,nums.end());
    
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    nextper(nums);
    for(auto it:nums){
        cout<<it<<" ";
    }
    return 0;
}

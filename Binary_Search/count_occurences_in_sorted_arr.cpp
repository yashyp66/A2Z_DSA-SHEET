#include<bits/stdc++.h>
using namespace std;
int firstoccurence(vector<int> &nums,int n,int k){
    int low=0;
    int high = n-1;
    int first=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==k){
            first=mid;
            high=mid-1;
        }
        else if(nums[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return first;
}
int lastoccurence(vector<int> &nums,int n,int k){
    int low=0;
    int high=n-1;
    int last=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==k){
            last=mid;
            low=mid+1;
        }
        else if(nums[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return last;
}
pair<int,int> fnl(vector<int>&nums,int k){
    int n=nums.size();
    int fo=firstoccurence(nums,n,k);
    if(fo==-1){
        return {-1,-1};
    }
    int lo=lastoccurence(nums,n,k);
    return {fo,lo};
}
int no(vector<int>&nums,int k){
    pair<int,int> ans=fnl(nums,k);
    if(ans.first==-1){
        return 0;
    }
    return(ans.second-ans.first+1);
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;

    int freq=no(nums,target);
    cout<<freq;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
pair<int,int> frequency(vector<int> &nums,int n){
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    int index=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[low]<nums[high]){
            ans=nums[low];
            index=low;
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
    return {ans,index};
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    pair<int,int> ans=frequency(nums,n);
    cout<<"The frequnecy of rotation of array  is: "<<ans.second<<"\n";
    cout<<"The smallest element in the rotated array is: "<<ans.first;
    return 0;
}

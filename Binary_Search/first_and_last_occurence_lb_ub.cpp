class Solution {
public:
int lowerbound(vector<int> &nums,int n , int k){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>=k){
           ans=mid;
           high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int upperbound(vector<int> &nums,int n , int k){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>k){
           ans=mid;
           high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lb=lowerbound(nums,n,target);
        if( nums.empty()||(lb==n) || (nums[lb]!=target)){
            return {-1,-1};
        }
        else{
            return {lb,upperbound(nums,n,target)-1};
        }
    }
};

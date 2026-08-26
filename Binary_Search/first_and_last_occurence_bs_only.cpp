class Solution {
public:
int firstoccurence(vector<int> &nums,int n,int k){
    int low=0;
    int high=n-1;
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
int lastoccurence(vector<int>&nums,int n,int k){
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
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int fo=firstoccurence(nums,n,target);
        if(fo==-1){
            return {-1,-1};
        }
        int lo=lastoccurence(nums,n,target);
        return {fo,lo};
    }
};

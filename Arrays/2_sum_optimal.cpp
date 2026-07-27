class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        sort(nums.begin(),nums.end());
        
       while(left<right){
        int sum=nums[left]+nums[right];
        if(sum==target){
            return "YES";
        }
        if(sum>target){
            right--;
        }
        else{
            left++;
        }
       }
       return "NO";
    }
};

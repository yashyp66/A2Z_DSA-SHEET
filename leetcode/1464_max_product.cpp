class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product=0;
        int n=nums.size();
       sort(nums.begin(),nums.end());
       product=(nums[n-1]-1)*(nums[n-2]-1);
       return product;
    }
};

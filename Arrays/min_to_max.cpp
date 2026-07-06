class Solution {
public:
    int countNonMinimum(vector<int>& nums) {
        // write your code here 
   if(nums.empty()) return 0;
   int min=nums[0];
   for(int num:nums){
       if(num<min){
           min=num;
       }
   }
   int count=0;
   for(int num:nums){
       if(num!=min) count++;
   }
   return count;
}
};

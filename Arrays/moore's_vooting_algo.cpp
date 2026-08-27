class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int counter=0;
        int majority =-1;
        for(int i=0;i<n;i++){
            if(counter==0){
                majority=nums[i];
                counter =1;
            }
            else if(nums[i]==majority){
                counter ++;
            }
            else{
                counter--;
            }
        }
        return majority;
    }
};
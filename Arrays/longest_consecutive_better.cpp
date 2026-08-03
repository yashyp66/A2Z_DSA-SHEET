class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int longest=0;
        int lastlargest=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastlargest){
                cnt+=1;
                lastlargest=nums[i];
            }
            else if(nums[i]!=lastlargest){
                cnt=1;
                lastlargest=nums[i];
            }
        longest=max(longest,cnt);
        }
       
        return longest;
    }

};

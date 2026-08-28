class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right =height.size()-1;
        int lmax=0;
        int rmax=0;
        int water=0;
       while(left<right){
           if(height[left]<height[right]){
               lmax=max(lmax,height[left]);
               water +=lmax-height[left];
               left+=1;
           }
           else{
               rmax=max(rmax,height[right]);
               water+=rmax-height[right];
               right-=1;
           }
       }
       return water;
    }
};
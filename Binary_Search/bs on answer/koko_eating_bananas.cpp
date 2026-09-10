class Solution {
public:
int findmax(vector<int>piles){
    int n=piles.size();
    int max=piles[0];
    for(int i=1;i<n;i++){
        if(piles[i]>max){
            max=piles[i];
        }
    }
    return max;
}
long long time(vector<int>&piles,int h){
     long long total_hours=0;
    for(int i=0;i<piles.size();i++){
        total_hours+=ceil((double)piles[i]/(double)h);
    }
    return total_hours;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=findmax(piles);
        //int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long requiredtime=time(piles,mid);
            if(requiredtime<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};

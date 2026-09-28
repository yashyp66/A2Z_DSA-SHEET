class Solution {
public:
int func(vector<int>&weight,int cap){
    int day=1; int load=0;
    for(int i=0;i<weight.size();i++){
        if(load+weight[i]>cap){
            day=day+1;
            load=weight[i];
        }
        else{
            load+=weight[i];
        }
    }
    return day;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int noofDays=func(weights,mid);
            if(noofDays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};

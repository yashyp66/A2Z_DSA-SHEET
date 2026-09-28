class Solution {
public:
    int func(vector<int>&weights,int cap){
        int days=1;int load=0;
        int n=weights.size();
        for(int i=0;i<n;i++){
            if(load+weights[i]>cap){
                days+=1;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int max=*max_element(weights.begin(),weights.end());
        int sum=accumulate(weights.begin(),weights.end(),0);
        for(int cap=max;cap<=sum;cap++){
            int n=func(weights,cap);
            if(n<=days){
                return cap;
            }
        }
        return sum;
    }
};

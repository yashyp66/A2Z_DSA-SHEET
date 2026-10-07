class Solution {
public:
    bool ls(vector<int>&mat, int n,int target){
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mat[mid]==target){
                return true;
            }
            else if(mat[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();
        bool x;
        for(int i=0;i<n;i++){
           x= ls(mat[i],m,target);
           if(x==true){
            return true;
            break;
           }
        }
        return false;
    }
};

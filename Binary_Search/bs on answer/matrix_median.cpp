int upperbound(vector<int>arr,int x){
    int low=0;
    int high=arr.size()-1;
    int ans=arr.size();
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    return ans;
}
int minelement(vector<vector<int>>&mat,int n,int m,int col){
    int idx=-1;
    int mini=-1;
    for(int i=0;i<n;i++){
        if(mat[i][col]<mini){
            mini=mat[i][col];
            idx=i;
        }
    }
    return mini;
}
int maxelement(vector<vector<int>>&mat,int n,int m,int col){
    int idx=-1;
    int maxi=-1;
    for(int i=0;i<n;i++){
        if(mat[i][col]>maxi){
            maxi=mat[i][col];
            idx=i;
        }
    }
    return maxi;
}
int blackbox(vector<vector<int>>&mat,int x){
    int cnt=0;
    int n=mat.size();
    for(int i=0;i<n;i++){
        cnt=cnt + upperbound(mat[i], x);
    }
    return cnt;
}
int findMedian(vector<vector<int>>& mat, int n, int m) {
    //write code here...
    int low=minelement(mat,n,m,0);
    int high=maxelement(mat,n,m,m-1);
    int req=(m*n)/2+1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int smallerEquals=blackbox(mat,mid);
        if(smallerEquals<req){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }
    return low;
}


#include<bits/stdc++.h>
using namespace std;
 vector<int> maxSubArray(vector<int>& nums) {
        long long sum=0;
        vector<int> temp(3);
        temp[1]=-1;
        temp[2]=-1;
        temp[0]=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(sum==0){
                temp[1]=i;
            }
            sum+=nums[i];
            if(sum>temp[0]){
                temp[0]=sum;
                temp[2]=i;
            }
          if(sum<0){
                sum=0;
            }
        }
        return temp;
    }

    int main(){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
       vector<int> ans(3);
       ans=maxSubArray(nums);
       cout<<"Maximum Sum: "<<ans[0]<<"\n";
       cout<<"Array : "<<"\n";
       for(int i=ans[1];i<=ans[2];i++){
        cout<<nums[i]<<" ";
       }
        return 0;
    }

#include <bits/stdc++.h>
using namespace std;

void sortArrayByParity(vector<int>& nums) {
    // Write your code here
   int oddc=0;
   for(auto n:nums){
       if(n%2!=0){
           oddc++;
       }
   }
   int odd=0;
   int even=oddc;
   vector<int> res(nums.size());
   for(int i=0;i<nums.size();i++){
       if(nums[i]%2!=0){
           res[odd++]=nums[i];
       }
       else{
           res[even++]=nums[i];
       }
   }
   nums=res;
    
}

int main() {
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    sortArrayByParity(nums);

    for (int i = 0; i < N; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}

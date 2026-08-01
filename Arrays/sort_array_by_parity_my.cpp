#include <bits/stdc++.h>
using namespace std;

void sortArrayByParity(vector<int>& nums) {
    // Write your code here
    vector<int>odd;
    vector<int> even;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]%2==0){
            even.push_back(nums[i]);
        }
        else{
            odd.push_back(nums[i]);
        }
    }
   for(int i=0;i<odd.size();i++){
       nums[i]=odd[i];
   }
   for(int i=0;i<even.size();i++){
       nums[odd.size()+i]=even[i];
   }
    
    
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

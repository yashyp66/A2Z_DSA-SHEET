#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int low=0;
    int high=n-1;
    int floor=-1;
    int ceil=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){
            ceil=arr[mid];
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    low=0;
    high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]<=target){
            floor=arr[mid];
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ceil<<" "<<floor<<"\n";
    return 0;
}

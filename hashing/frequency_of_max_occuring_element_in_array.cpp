#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int , int >mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int maxelement = arr[0];
    int maxfreq = mpp[arr[0]];
    for(auto it:mpp){
      if(it.second>maxfreq){
        maxfreq = it.second;
        maxelement=it.first;
      }
      
    }
    cout<<"Max occuring element in given array is "<<maxelement<<" which occurs "<<maxfreq<<" times "<<endl;

    
    return 0;
}

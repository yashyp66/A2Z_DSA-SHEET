#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int largest=arr[0];
   for(int i=0;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
   }
   int secl=-1;
   for(int i=0;i<n;i++){
    if(arr[i]>secl&&arr[i]!=largest){
        secl=arr[i];
    }
   }
   cout<<secl;
   
}

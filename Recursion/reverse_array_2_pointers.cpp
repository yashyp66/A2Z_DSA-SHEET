#include<bits/stdc++.h>
using namespace std;
void rev(int l,int r,int arr[],int n){
    if(l>=r){
         for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        return;

    }
    swap(arr[l],arr[r]);
    rev(l+1,r-1,arr,n);
   
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rev(0,n-1,arr,n);
    return 0;
}

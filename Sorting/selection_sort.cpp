#include<bits/stdc++.h>
using namespace std;
void selection(int arr[],int n){
    for(int i=0;i<n;i++){
        int small=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[small]){
                small = j;
            }
        }
        int temp =arr[i];
        arr[i]= arr[small];
        arr[small]= temp;
    }
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection(arr,n);
    return 0;
}

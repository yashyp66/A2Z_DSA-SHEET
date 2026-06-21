#include<bits/stdc++.h>
using namespace std;
void rev1(int i,int arr[],int n){
    if(i>=n/2){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        return;
    }
    swap(arr[i],arr[n-i-1]);
    rev1(i+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rev1(0,arr,n);
    return 0;
}

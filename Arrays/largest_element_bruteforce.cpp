#include<bits/stdc++.h>
using namespace std;
/*int partition(vector<int>&arr,int st,int end){ //brute force 
    int pivot=arr[end];
    int idx=st-1;
    for(int j=st;j<end;j++){
        if(arr[j]<pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
     idx++;
    swap(arr[end],arr[idx]);
    return idx;
}
void quicksort(vector<int>&arr,int st,int end){
    
    if(st<end){
        int pIdx=partition(arr,st,end);
        quicksort(arr,st,pIdx-1);
        quicksort(arr,pIdx+1,end);
    }
}*/
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
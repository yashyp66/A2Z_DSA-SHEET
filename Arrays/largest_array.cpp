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
   /* quicksort(arr,0,n-1);
    cout<<arr[n-1];*/ //brute force nlogn
   int largest=arr[0];//optimal n
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest;
    
    return 0;
}

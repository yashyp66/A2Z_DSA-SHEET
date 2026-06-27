#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int st,int end){
    int idx=st-1;
    int pivot=arr[end];
    for(int j=st;j<end;j++){
        if(arr[j]>=pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
        
    }  
    idx++;
        swap(arr[end],arr[idx]);
    return idx;
}
void quicksort(vector<int> &arr,int st,int end){
    if(st<end){
       int pIndex = partition(arr,st,end);
        quicksort(arr,st,pIndex-1);
        quicksort(arr,pIndex+1,end);
    }
   
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

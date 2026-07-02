#include<bits/stdc++.h>
using namespace std;
vector<int> secondOrder(vector<int>&arr,int n){
    vector<int> temp;

    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<ssmallest&&arr[i]!=smallest){
            ssmallest=arr[i];
        }
    }
    temp.push_back(ssmallest);
    
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>slargest&&arr[i]!=largest){
            slargest=arr[i];
        }
    }
    temp.push_back(slargest);
    
    return temp;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ans = secondOrder(arr,n);
    for(int a:ans){
        cout<<a<<" ";
    }
}

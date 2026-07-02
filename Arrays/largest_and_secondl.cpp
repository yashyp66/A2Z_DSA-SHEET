#include <bits/stdc++.h>
using namespace std;
int largest(int arr[],int n){
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
    return largest+slargest;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxsum=largest(a,n);
        cout<<maxsum<<endl;
        // your code goes here
    }
}

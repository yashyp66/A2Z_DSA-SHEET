#include <bits/stdc++.h>
using namespace std;
bool check(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[i-1]){}
        else {
            return false ;
        }
    }
    return true;
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool sorted=check(arr,n);
    cout<<sorted;

}

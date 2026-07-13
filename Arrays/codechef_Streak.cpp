#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
    
    int max1=0;
    int max2=0;
    int count=0;
    for(int i=0;i<n;i++){
        
        if(a[i]!=0){
            count++;
            max1=max(count,max1);
        }else{
            count=0;
        }
    }
    count=0;
       for(int i=0;i<n;i++){
        
        if(b[i]!=0){
            count++;
            max2=max(count,max2);
        }else{
            count=0;
        }
    }
    if(max1>max2){
        cout<<"Om"<<"\n";
    }
    else if(max1==max2){
        cout<<"Draw"<<"\n";
    }
    else{
        cout<<"Addy"<<"\n";
    }
	// your code goes here

}
}

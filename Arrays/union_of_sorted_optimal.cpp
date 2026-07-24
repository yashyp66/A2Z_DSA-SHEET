#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    vector<int> a1(n1);
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    int n2;
    cin>>n2;
    vector<int> a2(n2);
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
   vector<int> u;
   int i=0;
   int j=0;
   while(i<n1&&j<n2){
    if(a1[i]<=a2[j]){
        if(u.size()==0 || u.back()!=a1[i]){
            u.push_back(a1[i]);
        }
        i++;
    }
    else{if(a2[j]<=a1[i]){
            if(u.size()==0 || u.back()!=a2[j]){
                u.push_back(a2[j]);
            }
            j++;
        }
        
    }
   
   }
    while(i<n1){
        if(u.size()==0 || u.back()!=a1[i]){
            u.push_back(a1[i]);
        }
        i++;
    }
    while(j<n2){
         if(u.size()==0 || u.back()!=a2[j]){
                u.push_back(a2[j]);
            }
            j++;
    }
    for(auto it: u){
        cout<<it<<" ";
    }
  
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<int>cars(n);
            int m;
            cin>>m;
            vector<int>outlets(m);
            int h;
            cin>>h;
            for(int i=0;i<n;i++){
                cin>>cars[i];
            }
            for(int i=0;i<m;i++){
                cin>>outlets[i];
            }
            
            int ans=0;
            for(int i=0;i<m;i++){
                sort(cars.begin(),cars.end());
                int prod=h*outlets[i];
                if(prod>cars[n-1]){
                    prod=cars[n-1];
                }
                if(n<m){
                    ans=max(ans,prod);
                }
                else{
                     ans+=prod;
                }
               
                
            }
            cout<<ans<<"\n";
        }
        return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,h;
	    cin>>n>>m>>h;
	    vector<int>a(n),b(m);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int j=0;j<m;j++){
	        cin>>b[j];
	    }
	    sort(a.begin(),a.end(),greater<int>());
	    sort(b.begin(),b.end(),greater<int>());
	    long long sum=0;
	    for(int i=0;i<min(n,m);i++){
	        long long energy_product=1ll*h*b[i];
	        sum+=min(energy_product,1ll*a[i]);
	    }
	    cout<<sum<<"\n";
	    
	}
	return 0;

}

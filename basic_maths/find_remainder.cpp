#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    vector<int> arr(2);
	    for(int i=0;i<2;i++){
	        cin>>arr[i];
	    }
	    int r;
	    r=arr[0]%arr[1];
	    cout<<r<<"\n";
	}

}

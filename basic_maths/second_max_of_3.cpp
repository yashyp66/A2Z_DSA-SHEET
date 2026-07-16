#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    vector<int> arr(3);
	    for(int i=0;i<3;i++){
	        cin>>arr[i];
	    }
	    sort(arr.begin(),arr.end());
	    cout<<arr[1]<<"\n";
	}

}

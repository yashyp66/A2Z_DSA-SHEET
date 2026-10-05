#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int max_cnt=-1;
    int index=-1;
    for(int i=0;i<n;i++){
        int cnt_row=0;
        for(int j=0;j<m;j++){
            cnt_row+=arr[i][j];
        }
        if(cnt_row>max_cnt){
            max_cnt=cnt_row;
            index=i;
        }
    }
    cout<<index;
    return 0;
}

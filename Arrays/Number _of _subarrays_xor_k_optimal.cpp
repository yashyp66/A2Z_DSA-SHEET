int subarraysWithKOrK(vector<int> &nums, int k) {
    int xr = 0;
    map<int,int> m;
    m[xr] = 1; 
    int cnt = 0;

    for(int i = 0;i<nums.size();i++){
        xr = xr ^ nums[i];
        int x = xr ^ k;
        cnt += m[k ^ x];
        m[xr]++;
    }

    return cnt;
}

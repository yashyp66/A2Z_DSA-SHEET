int hasPairWithDifference(vector<int>& A, int N, int B) {
    // write your code here 
    sort(A.begin(), A.end());
        
        int i = 0, j = 1;
        bool found = false;
        
        while (i < N && j < N) {
            long long diff = (long long)A[j] - A[i];
            
            if (i != j && diff == B) {
                found = true;
                break;
            } else if (diff < B) {
                j++;
            } else {
                i++;
                // Ensure j is always strictly ahead of i
                if (i == j) {
                    j++;
                }
            }
        }
        
        return (found ? 1 : 0) ;
    
}

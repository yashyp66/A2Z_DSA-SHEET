#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    // Optimizing input/output operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        unordered_set<int> set_A;
        vector<int> B(N);
        
        // Insert all elements of array A into a hash set
        for (int i = 0; i < N; i++) {
            int num;
            cin >> num;
            set_A.insert(num);
        }
        
        // Read array B
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        
        // Count how many elements of B are present in set_A
        int common_count = 0;
        for (int num : B) {
            if (set_A.find(num) != set_A.end()) {
                common_count++;
            }
        }
        
        cout << common_count << "\n";
    }
    
    return 0;
}

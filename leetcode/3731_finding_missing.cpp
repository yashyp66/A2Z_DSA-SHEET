class Solution {
public:
    vector<int> findMissingElements(vector<int>& a) {
        sort(a.begin(), a.end());

        vector<int> ans;

        for (int i = 0; i < a.size() - 1; i++) {
            for (int j = a[i] + 1; j < a[i + 1]; j++) {
                ans.push_back(j);
            }
        }

        return ans;
    }
};

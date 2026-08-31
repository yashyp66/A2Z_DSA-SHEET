class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        int first = -1;
        int last = -1;
        
        int minDist = INT_MAX;
        
        int index = 1;
        
        ListNode* prev = head;
        ListNode* curr = head->next;
        
        while (curr->next != nullptr) {
            
            // Check if curr is a critical point
            bool critical = 
                (curr->val > prev->val && curr->val > curr->next->val) ||
                (curr->val < prev->val && curr->val < curr->next->val);
            
            if (critical) {
                
                // First critical point
                if (first == -1) {
                    first = index;
                }
                
                // We already have a previous critical point
                if (last != -1) {
                    minDist = min(minDist, index - last);
                }
                
                // Current becomes the latest critical point
                last = index;
            }
            
            prev = curr;
            curr = curr->next;
            index++;
        }
        
        // Fewer than 2 critical points
        if (first == last) {
            return {-1, -1};
        }
        
        int maxDist = last - first;
        
        return {minDist, maxDist};
    }
};

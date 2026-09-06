class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min_val = nums1[0];
        
        // Find minimum element in the array
        for (int x : nums1) {
            min_val = min(min_val, x);
        }
        
        // Smallest element odd-aa irundha, eppovum true
        if (min_val % 2 != 0) {
            return true;
        }
        
        // Smallest element even-aa irundha, matha ellaam even-aa irukkanum
        for (int x : nums1) {
            if (x % 2 != 0) {
                return false;
            }
        }
        
        return true;
    }
};
class Solution {
public:
    int distinctSubseqII(string s) {
        long long mod = 1e9 + 7;
        vector<long long> last(26, 0);
        
        for (char c : s) {
            long long current_total = 0;
            for (int i = 0; i < 26; ++i) {
                current_total = (current_total + last[i]) % mod;
            }
            // 1 accounts for the single character subsequence consisting of 'c' alone
            last[c - 'a'] = (current_total + 1) % mod;
        }
        
        long long ans = 0;
        for (int i = 0; i < 26; ++i) {
            ans = (ans + last[i]) % mod;
        }
        
        return ans;
    }
};
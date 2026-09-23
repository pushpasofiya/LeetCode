class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> freq;
        int maxfreq=0;
        int l=0;
        for(int r=0;r<s.length();r++)
        {
            freq[s[r]]++;
            while(freq[s[r]]>1)
            {
                freq[s[l]]--;
                l++;
            }
            maxfreq=max(maxfreq,r-l+1);
        }
        return maxfreq;
    }
};
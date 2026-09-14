class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mpp;
        for(int i=0;i<jewels.length();i++)
        {
            mpp[jewels[i]]++;
        }
        int count=0;
        for(int i=0;i<stones.length();i++)
        {
            count+=mpp[stones[i]];
        }
        return count;
        
    }
};
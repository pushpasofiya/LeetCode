class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ni=nums.size();
        unordered_map<int,int>mpp;
        for(int x:nums)
        {
            mpp[x]++;
        }
        for(int n:nums)
        {
            if(mpp[n]>ni/2)
            {
                return n;
            }
        }
        return 0;
    }
};
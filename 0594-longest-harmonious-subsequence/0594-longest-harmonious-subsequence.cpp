class Solution {
public:
    int findLHS(vector<int>& nums) {
        int length=INT_MIN;
        unordered_map<int,int>mpp;
        for(int num:nums)
        {
            mpp[num]++;
        }
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            int sum=0;
            if(nums[i]!=nums[i-1])
            {
                if(abs(nums[i]-nums[i-1])==1)
                {
                     sum=mpp[nums[i]]+mpp[nums[i-1]];
                     length=max(length,sum);
                }
            }
        }
        if(length==INT_MIN)
        {
            return 0;
        }
        return length;

        
    }
};
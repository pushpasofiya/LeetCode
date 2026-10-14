class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        vector<int>ans(2);
        int maxprod=INT_MIN;
        int flag=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]+nums[i]==target && nums[i]>nums[j])
                {
                    flag=1;
                   int prod=nums[i]*nums[j];
                    if(prod>=maxprod)
                    {
                        maxprod=prod;
                     ans[0]=i;
                     ans[1]=j;
                    }
                }
            }
        }
        if(flag)
        {
            return { ans[0],ans[1]};
        }
       return {-1,-1};
    }
};
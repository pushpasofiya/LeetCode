class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        unordered_map<int,int>mpp;
        int length=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        } 
        {
         for(int i=0;i<nums.size();i++)
         {
            int sum=0;
            if(nums[i]==-1)
            {
                 if((find(nums.begin(),nums.end(),nums[i]-1)!=nums.end())||find(nums.begin(),nums.end(),nums[i]+1)!=nums.end())
            {
                sum=mpp[nums[i]]+mpp[nums[i]+1];
                length=max(length,sum);
            }
            }
            else if(find(nums.begin(),nums.end(),nums[i]+1)!=nums.end())
            {
                sum=mpp[nums[i]]+mpp[nums[i]+1];
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
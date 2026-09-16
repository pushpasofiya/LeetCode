class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         long long  sum=0;
         int l=0;
         int ans=INT_MAX;
        for(int r=0;r<nums.size();r++)
        {
               sum+=nums[r];
               while(sum>=target)
               {
                 int len=r-l+1;
                 ans=min(ans,len);
                 sum-=nums[l];
                 l++;


               }
               
        }
        if(ans==INT_MAX)
        {
            return 0;
        }
        return ans;
        
    }
};
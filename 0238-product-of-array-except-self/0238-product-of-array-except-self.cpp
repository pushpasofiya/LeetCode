class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left_prod=1;
        int len=nums.size();
        vector<int>ans(len);
        ans[0]=1;
        for(int i=1;i<len;i++)
        {
            left_prod*=nums[i-1];
            
            ans[i]=left_prod;
        }
        int right_prod=1;
          for(int i=nums.size()-2;i>=0;i--)
        {
            right_prod*=nums[i+1];
            
            ans[i]*=right_prod;
        }
        return ans;
    }
};
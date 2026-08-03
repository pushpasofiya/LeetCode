class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            nums[i]*=nums[i];
        }
        vector<int>ans(n);
        int l=0;
        int r=nums.size()-1;
        int ind=n-1;
        while(l<=r && (ind>=0))
        {
            if(nums[l]>=nums[r])
            {
                ans[ind]=nums[l];
                ind--;
                l++;
            }
            else if(nums[r]>=nums[l])
            {
                ans[ind]=nums[r];
                ind--;
                r--;
            }
        }
        return ans;
    }
};
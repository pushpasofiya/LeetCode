class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int t_s=0;
        int l_s=0;
        for(int num:nums)
        {
            t_s+=num;
        }
        for(int i=0;i<nums.size();i++)
        {
            int pivot=nums[i];
            int right=t_s-l_s-pivot;
            if(l_s==right)
            {
                return i;
            }
            else
            {
                l_s+=nums[i];
            }
        }
        return -1;
        
    }
};
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++)
        {
            total+=nums[i];
        }
        int l_sum=0;
        int r_sum=0;
        int pivot=0;
        for(int i=0;i<nums.size();i++)
        {
            pivot=nums[i];
            r_sum=total-l_sum-pivot;
            if(l_sum==r_sum)
            {
                return i;
            }
            else
            {
                l_sum+=nums[i];
            }
        }
        return -1;
    }
};
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
        }
        int pos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(target<nums[i])
            {
                return pos;
            }
            else
            {
                pos++;
            }
        }
        return pos;
    }
};
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int l=0;l+1<nums.size();l++)
        {
            if(nums[l]==nums[l+1])
            {
                return true;
            }
        }
    return false;
            }
};
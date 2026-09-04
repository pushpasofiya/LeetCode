class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>temp=nums;
        int pos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(temp[i]!=val)
            {
                nums[pos]=temp[i];
                pos++;
            }
        }
        return pos;

        
    }
};
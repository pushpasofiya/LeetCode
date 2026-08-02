class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp=nums;
        int i=0;
        int n= nums.size();
        int ind=0;
        for(int i=0;i<nums.size();i++)
        {
            if(temp[i]!=0)
            {
                  nums[ind]=temp[i];
                  ind++;
            }
        }
        for(int i=ind;i<n;i++)
        {
            nums[i]=0;
        }
    }
};
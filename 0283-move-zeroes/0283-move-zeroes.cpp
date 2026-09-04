class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp=nums;
        int len=nums.size();
        int pos=0;
        int count=0;
        while(pos!=len)
        {
            if(nums[pos]==0)
            {
                count++;
            }
            pos++;
        }
        int val=len-count;
        int p=0;
        for(int i=0;i<len;i++)
        {
            if(temp[i]!=0)
            {
                nums[p]=temp[i];
                p++;
            }
        }
        for(int i=val;i<len;i++)
        {
            nums[i]=0;
        }


    }
};
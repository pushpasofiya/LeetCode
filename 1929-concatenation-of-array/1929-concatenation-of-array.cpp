class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len=nums.size();
        int total=len+len;
        vector<int>ans(total);
        for(int i=0;i<len;i++)
        {
            ans[i]=nums[i];
        }
        int ind=0;
         for(int i=len;i<total;i++)
        {
            ans[i]=nums[ind];
            ind++;
        }
     return ans;
    }
};
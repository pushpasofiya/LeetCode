class Solution {
public:
    int findGCD(vector<int>& nums) {

        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        int a=0;
        while(mini!=0)
        {
            int r = maxi%mini;
             maxi=mini;
               mini=r;
        }
       return maxi;
        
    }
};
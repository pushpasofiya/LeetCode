class Solution {
public:
    int arrayPairSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int n=nums.size();
        int r=n-1;
        int maxi=INT_MIN;
        int add=0;
        for(int i=0;i<n;i+=2)
        {
            add+=nums[i];

        }
        return add;
        
    }
};
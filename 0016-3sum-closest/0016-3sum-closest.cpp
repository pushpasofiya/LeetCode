class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int close=nums[0]+nums[1]+nums[2];
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n-2;i++)
        {
            if(i>0 &&(nums[i]==nums[i-1]))
            {
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<abs(close-target))
                {
                    close=sum;
                }
                if(sum==target)
                {
                    return sum;
                }
                else if(sum<target)
                {
                    j++;
                }
                else if(sum>target)
                {
                    k--;
                }
            }
        }
        return close;
    }
};
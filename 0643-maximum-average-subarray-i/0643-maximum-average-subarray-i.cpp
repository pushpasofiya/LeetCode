class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
            int l=0;
            double sum=0;
            double avg=0;
            double ans=INT_MIN;

            for(int r=0;r<nums.size();r++)
            {
                sum+=nums[r];
                while(r-l+1==k)
                {
                        avg=sum/k;
                        ans=max(ans,avg);
                         sum-=nums[l];
                          l++;
                }
            }
            return ans;
    }
};
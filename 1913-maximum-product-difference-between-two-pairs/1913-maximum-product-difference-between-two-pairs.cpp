class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int best=INT_MIN;
        int left=0;
        int right=nums.size()-1;
         int sum=0;
        while(left<=right)
        {
         int first=(nums[left]*nums[left+1]);
         int last=(nums[right]*nums[right-1]);
         sum=abs(first-last);
         left++;
         right--;
          best=max(best,sum);
        }
        return best;

    }
};
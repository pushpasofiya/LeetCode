class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {

        unordered_map<int,int> mpp;
        vector<int>ans;
        for(int num:nums)
        {
            mpp[num]++;
        }
        for(int num:nums)
        {
            if(mpp[num]>1)
            {
                if(find(ans.begin(),ans.end(),num)==ans.end())
                {
                  ans.push_back(num);
                }
            }
        }
        return ans;
        
    }
};
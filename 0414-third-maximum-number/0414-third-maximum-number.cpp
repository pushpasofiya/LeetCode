class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int,greater<int>> s(nums.begin(),nums.end());
        int n=s.size();
        if(n>=3)
        {
            auto it=s.begin();
            advance(it,2);
            return *it;
        }
        return *s.begin();
    }
};
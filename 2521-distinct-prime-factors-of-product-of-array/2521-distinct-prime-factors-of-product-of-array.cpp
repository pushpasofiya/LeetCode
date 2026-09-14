class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {

        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            for(int p=2;p*p<=n;p++)
            {
                while(n%p==0)
                {
                    s.insert(p);
                    n/=p;
                }
            }
            if(n>1)
            {
                s.insert(n);
            }
        
    }

    return s.size();
    }
};
class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mpp;
        int ori=n;
        while(n!=0)
        {
           int last=n%10;
           mpp[last];
           n/=10;
        }
         while(ori!=0)
        {
           int last=ori%10;
           mpp[last]++;
           ori/=10;
        }

     int sum = accumulate(mpp.begin(), mpp.end(), 0,
    [](int total, const auto& p) {
        return total +(p.first*p.second);
    });
    return sum;
    }
};
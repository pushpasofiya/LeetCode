class Solution {
public:
     const long long MOD = 1e9 + 7;
    long long power(long long base, long long exp)
    {
        long long ans=1;
        while(exp>0)
        {
            if(exp%2==1)
            {
                ans=(ans*base)%MOD;
            }
            base=(base*base)% MOD;
            exp/=2;
        }

       return ans;
    }
    int countGoodNumbers(long long n) {
        if(n==1)
        {
            return 5;
        }
        long long evenposition=(n+1)/2;
        long long oddposition=n/2;

        long long evenways=power(5,evenposition);
        long long oddways=power(4,oddposition);

        return(evenways*oddways)%MOD;
    }
};
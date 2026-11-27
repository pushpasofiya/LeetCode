class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
        {
            return 0;
        }
        vector<bool>isprime(n,true);
        isprime[0]=false;
        isprime[1]=false;
        for(int p=2;p<n;p++)
        {
            if(isprime[p])
            {
               for(long long int j=1LL*p*p;j<n;j+=p)
               {
                 isprime[j]=false;
               }
            }
        }
        int c=0;
        for(int p=2;p<n;p++)
        {
            if(isprime[p])
            {
                c++;
            }
        }
        return c;
    }
};
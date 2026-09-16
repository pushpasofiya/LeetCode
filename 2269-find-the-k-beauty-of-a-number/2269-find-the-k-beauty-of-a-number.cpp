class Solution {
public:
    int divisorSubstrings(int num, int k) {
        long long  ori=num;
        int count=0;
        while(num>=pow(10,k-1))
        {
            long long ans=num%(long long)pow(10,k);
            if(ans==0)
            {
                num/=10;
                continue;
            }
           else if(ori%ans==0)
            {
                count++;
                 num/=10;
            }
            else
            {
              num/=10;
            }
        }
        return count;
    }
};
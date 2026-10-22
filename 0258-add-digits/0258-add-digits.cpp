class Solution {
public:
    int addDigits(int num) {
        long long int sum=num;
        while(!(sum<=9))
        {
            long long int s=0;
           while(num!=0)
           {
             long long int last=num%10;
             s+=last;
             num/=10;
              
           }
           sum=s;
           num=s;
        }
        return sum;
    }
};
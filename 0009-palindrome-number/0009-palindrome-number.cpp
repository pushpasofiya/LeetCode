class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0)
        {
            return false;
        }
        long long int ori=n;
        long long int rev=0;
        while(n!=0)
        {
            long long int last=n%10;
            rev=rev*10+last;
            n/=10;
        }
        if(rev==ori)
        {
            return true;
        }
        return false;
    }
};
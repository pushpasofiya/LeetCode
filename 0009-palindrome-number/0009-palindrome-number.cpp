class Solution {
public:
    bool isPalindrome(int x) {
       long long int rev=0;
       long long int ori=x;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
           long long int last=x%10;
            rev=(rev*10)+last;
            x/=10;
            
        }
        if(ori==rev)
        {
            return true;
        }
        return false;
    }
};
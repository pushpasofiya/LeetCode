class Solution {
public:
    vector<int> evenOddBit(int n) {
        int digit=0;
        int pos=0;
        int even=0;
        int odd=0;
        while(n>0)
        {
            digit=n&1;
            if(digit==1)
            {
                if(pos%2==0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            pos++;
            n=n>>1;

        }
        vector<int> ans;
        ans.push_back(even);
        ans.push_back(odd);
        return ans;

    }
};
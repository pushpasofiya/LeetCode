class Solution {
public:
    int minimumSum(int num) {
        int last=0;
        vector<int>ans;
        while(num!=0)
        {
            last=num%10;
            ans.push_back(last);
            num/=10;
            
        }
        sort(ans.begin(),ans.end());
        int add=0;
        int q1=ans[0]*10+ans[2];
        int q2=ans[1]*10+ans[3];
        add=q1+q2;
        return add;

        
    }
};
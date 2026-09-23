class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        unordered_map<int,int>mpp;
        int l=0;
        int n=fruits.size();
        int maxl=INT_MIN;
        for(int r=0;r<n;r++)
        {
            mpp[fruits[r]]++;
            if(mpp.size()<=2)
            {
                int len=r-l+1;
                maxl=max(len,maxl);
            }
            while(mpp.size()>2)
            {
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0)
                {
                    mpp.erase(fruits[l]);
                }
                l++;

            }

        }
        return maxl;
        
    }
};
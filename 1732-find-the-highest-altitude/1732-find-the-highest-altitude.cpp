class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>pref(n+1);
        pref[0]=0;
        pref[1]=gain[0];
        for(int i=2;i<n+1;i++)
        {
            pref[i]=gain[i-1]+pref[i-1];
        }
        int maxi=*max_element(pref.begin(),pref.end());
        return maxi;
    }
};
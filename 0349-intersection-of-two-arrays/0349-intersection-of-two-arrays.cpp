class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
          set<int> s;
          for(int i=0;i<nums2.size();i++)
          {
            if(find(nums1.begin(),nums1.end(),nums2[i])!=nums1.end())
            {
                s.insert(nums2[i]);
            }
          }
          vector<int> ans(s.begin(),s.end());
          return ans;
        
    }
};
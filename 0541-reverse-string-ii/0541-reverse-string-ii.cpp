class Solution {
public:
    string reverseStr(string s, int k) {
        int len=s.length();

        for(int i=0;i<s.length();i+=2*k)
        {
            reverse(s.begin()+i,s.begin()+min(len,i+k));
        }
        return s;
    }
};
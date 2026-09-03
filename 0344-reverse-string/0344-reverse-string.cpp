class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> temp=s;
        int len=s.size()-1;
        int i=0;
        while(len!=-1)
        {
            s[i]=temp[len];
            len--;
            i++;
        }
        
    }
};
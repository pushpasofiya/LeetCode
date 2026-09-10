class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        int present[26]={0};
        int count=0;
        for(char ch:allowed)
        {
            present[ch-'a']++;
        }
        for(string word:words)
        {
            int flag=1;
            set<char>s(word.begin(),word.end());
            for(char c:s)
            {
                if(!present[c-'a'])
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
            {
                count++;
            }
        }
        return count;
        
    }
};
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       int flag=1;
       int count=0;
        for(string word:words)
        {
           flag=1;
            for(int i=0;i<word.length();i++)
            {
                if(find(allowed.begin(),allowed.end(),word[i])==allowed.end())
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
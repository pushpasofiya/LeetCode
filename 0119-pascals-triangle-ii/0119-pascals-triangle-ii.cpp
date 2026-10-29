class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>newrow;
        vector<int>previousrow;
        newrow.push_back(1);
        int i=0;
        if(i==rowIndex)
        {
            return newrow;
        }
        else
        {
            i++;
           
        }
         if(i==rowIndex)
            {
                newrow.push_back(1);
                return newrow;
            }
        while(i!=rowIndex+1)
        {
            if(i!=1)
            {
            newrow.push_back(1);
            for(int i=0;i<previousrow.size()-1;i++)
            {
                int sum=previousrow[i]+previousrow[i+1];
                newrow.push_back(sum);

            }
             newrow.push_back(1);
             previousrow=newrow;
             newrow.clear();
            }
            else
            {
                newrow.push_back(1);
                previousrow=newrow;
                 newrow.clear();
            }
            i++;

        }
        return previousrow;
    }
};
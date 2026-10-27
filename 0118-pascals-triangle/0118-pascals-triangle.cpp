class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        vector<int>previousrow;
        vector<int>newrow;
        
        previousrow.push_back(1);
        triangle.push_back(previousrow);
        while(numRows!=1)
        {
        newrow.push_back(1);
        int n=previousrow.size();
        vector<int> middle;
        if(n==1)
            middle.push_back(previousrow[0]);
        else
        {
        for(int i=0;i<previousrow.size()-1;i++)
        {
            middle.push_back(previousrow[i]+previousrow[i+1]);
        }
        }
        
        for(int i=0;i<middle.size();i++)
        {
            newrow.push_back(middle[i]);
        }
        if(n!=1)
        {
        newrow.push_back(1);
        }
        triangle.push_back(newrow);
        previousrow=newrow;
        newrow.clear();
        numRows--;
        }
        return triangle;
    }
};
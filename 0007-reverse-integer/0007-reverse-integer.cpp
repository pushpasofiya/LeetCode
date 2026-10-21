class Solution {
public:
    int reverse(int x) {
        string s=to_string(x);
       std:: reverse(s.begin(),s.end());
         int p=0;
         try{
         p=stoi(s);
         }
          catch (const std::exception& e) {
            return 0;
}
        if(x<0)
        {
            p=-p;
        }
        return p;
    }
};
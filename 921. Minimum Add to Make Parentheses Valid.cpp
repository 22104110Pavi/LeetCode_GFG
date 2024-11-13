class Solution {
public:
    int minAddToMakeValid(string s) {
        int open=0,close=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                open+=1;
            }
            else
            {
                if(open<=0)
                {
                    close+=1;
                }
                else
                {
                    open-=1;
                }
            }
        }
        return open+close;
    }
};

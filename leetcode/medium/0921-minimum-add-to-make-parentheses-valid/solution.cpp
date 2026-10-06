class Solution {
public:
    int minAddToMakeValid(string s) {
        int oparen=0;
        int cparen=0;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch=='(') oparen++;
            else if(ch==')' && oparen>0) oparen--;
            else cparen++;
        }
        return oparen+cparen;
    }
};
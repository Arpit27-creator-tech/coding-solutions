class Solution {
public:
    bool judgeCircle(string moves) {
        int move=0;
        for(int i=0;i<moves.size();i++)
        {
            char ch=moves[i];
            if(ch=='U') move++;
            else if(ch=='D') move--;
            else if(ch=='R') move+=2;
            else move-=2;

        }
        if(move==0) return true;
        return false;
    }
};
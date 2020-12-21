class Solution {
public:
    bool judgeCircle(string moves) {
        int hor=0, ver=0;
        for(char c:moves){
            switch(c){
                case 'U' : ver++;
                break;
                case 'D' : ver--;
                break;
                case 'L' : hor--;
                break;
                case 'R' : hor++;
                break;
            }
        }
        return hor==0 && ver==0;
    }
};

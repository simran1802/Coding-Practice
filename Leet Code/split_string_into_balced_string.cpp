class Solution {
public:
    int balancedStringSplit(string s) {
        int left_cnt=0,right_cnt=0,count=0;
        for(char c:s){
            if(c=='L')
                left_cnt++;
            else
                right_cnt++;
            if(left_cnt==right_cnt)
                count++;
        }
        return count;
    }
};

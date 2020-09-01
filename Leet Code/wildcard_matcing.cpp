class Solution {
public:
    bool isMatch(string s, string p) {
        int i=0,j=0;
        int m= s.length();
        int n = p.length();
        int last = -1;
        int start_j = -1;
        while(i<m){
            if(j<n && s[i]==p[j] || p[j]=='?'){
                i++;
                j++;
            }
            else if(j<n && p[j]=='*'){
                start_j = j;
                j++;
                last = i;
            }
            else if(start_j != -1){
                j = start_j +1;
                last++;
                i = last;
            }
            else
                return false;
        }
        while(p[j]=='*' && j<n)
            j++;
        return j==n;
    }
};

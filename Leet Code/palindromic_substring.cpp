class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        int n = s.size();
        for(int i=0;i<n;i++){
            for(int left=i ,right=i;left>=0 && right<n && s[left]==s[right];left--,right++){
                count++;
            }
            for(int left=i ,right=i+1;left>=0 && right<n && s[left]==s[right];left--,right++){
                count++;
            }
            
            
        }
        return count;
    }
};

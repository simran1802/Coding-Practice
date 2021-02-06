class Solution {
public:
    int minimumLength(string s) {
        int left=0, right=s.size()-1;
        while(left<right && s[left]==s[right]){
            auto c=s[left];
            while(left<=right && s[left]==c)
                ++left;
            while(left<=right && s[right]==c)
                --right;
        }
        return left>right ? 0 : right-left+1;
    }
};

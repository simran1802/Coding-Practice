class Solution {
public:
    bool halvesAreAlike(string s) {
        int a=0,b=0;
        unordered_set<char> vow = {'a', 'e', 'i', 'o', 'u','A','I','E','O','U'};
        for(int i=0,j=s.size()-1;i<j;i++,j--){
            if(vow.find(s[i]) != vow.end()) 
                a++;
            if(vow.find(s[j]) != vow.end())
                b++;
        }
        return a==b; 
    }
}; 

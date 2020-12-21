class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size()<2)
            return chars.size();
        int i=0,j=0;
        while(i<chars.size()){
            chars[j] = chars[i];
            int c=0;
            while(i<chars.size() && chars[i]==chars[j]){
                c++;
                i++;
            }
            if(c==1)
                j++;
            else{
                string str = to_string(c);
                for(auto ch : str){
                    chars[++j] = ch;
                }
                j++;
                
            }
        }
        return j;
    }
};

class Solution {
public:
    
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.empty())
            return vector<string>();
        static const vector<string> v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs","tuv", "wxyz"};
        result.push_back("");
        for(int i=0;i<digits.size();++i){
            int input = digits[i]-'0';
            if(input<0 || input>9)
                break;
            const string &cand = v[input];
            if(cand.empty())
                continue;
            vector<string> tmp;
            for(int j=0;j<cand.size();++j){
                for(int k=0;k<result.size();++k){
                    tmp.push_back(result[k]+cand[j]);
                    
                }
            }
            result.swap(tmp);
        }
        return result;
    }
};

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> ans(256,0);
        vector<bool> visit(256,false);
        for(char c : s)
            ans[c]++;
        string result = "0";
        for(char c:s){
            ans[c]--;
            if(visit[c])
                continue;
            while(c < result.back() && ans[result.back()]){
                visit[result.back()] = false;
                result.pop_back();
                
            }
            result += c;
            visit[c] = true;
            
        }
        return result.substr(1);
    }
};

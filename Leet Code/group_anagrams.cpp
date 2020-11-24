class Solution {
private:
    string mysort(string s){
        int count[26] = {0};
        for(char c:s)
            count[c-'a']++;
        string temp;
        for(int c=0;c<26;c++){
            temp += string(count[c],c+'a');
        }
        return temp;   
    }
    
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(string s:strs){
            string a = s;
            mp[mysort(a)].push_back(s);
            
        }
        vector<vector<string>> ans;
        for(auto p:mp){
            ans.push_back(p.second);
        }
        return ans;
    }
};

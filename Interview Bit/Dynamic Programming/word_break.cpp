void wordbreak(int index,string &s,string temp,vector<string> &res,unordered_map<string,int> &mp){
    if(index == s.size()){
        temp.pop_back();
        res.push_back(temp);
        return;
    }
    string sub = "";
    for(int i = index;i<s.size();i++){
        sub += s[i];
        if(mp.find(sub) != mp.end()){
            int st = temp.size();
            temp += (sub+" ");
            wordbreak(i+1,s,temp,res,mp);
            temp.erase(temp.begin()+st,temp.end());
        }
    }
}

vector<string> Solution::wordBreak(string A, vector<string> &B) {
    vector<string> res;
    unordered_map<string,int> mp;
    for(int i=0;i<B.size();i++)
    mp[B[i]]++;
    wordbreak(0,A,"",res,mp);
    return res;
    
}

vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    unordered_map<string,vector<int>> tmp;
    vector<vector<int>> ans;
    for(int i=0;i<A.size();i++){
        string s = A[i];
        sort(s.begin(),s.end());
        tmp[s].push_back(i+1);
        
    }
    for(auto x:tmp){
        ans.push_back(x.second);
    }
    return ans;
}

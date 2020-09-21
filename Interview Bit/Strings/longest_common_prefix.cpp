string Solution::longestCommonPrefix(vector<string> &A) {
    string res = A[0];
    int n = A.size();
    for(int i=1;i<n;i++){
        int curr = min(res.size(),A[i].size());
        while(res.substr(0,curr) != A[i].substr(0,curr)){
            curr--;
            
        }
        if(curr<0)
            curr=0;
        else
            res = res.substr(0,curr);
    }
    return res;
}

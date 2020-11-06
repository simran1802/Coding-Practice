int Solution::solve(vector<int> &A, int B) {
    int res=0;
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++){
        if(mp.find(B^A[i])!=mp.end()){
            res++;
        }
        else{
            mp[A[i]++];
        }
    }
    return res;
}

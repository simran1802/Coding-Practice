int Solution::solve(vector<int> &A, int B) {
    int res=0,sum=0;
    unordered_map<int,int> mp;
    mp[0]=1;
    for(int i=0;i<A.size();i++){
        if(A[i]%2)
            sum++;
        if(mp[sum-B])
            res+= mp[sum-B];
        mp[sum]++;
    }
    return res;
}

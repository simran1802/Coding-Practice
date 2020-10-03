int Solution::solve(vector<int> &A) {
    int res=0,i=0;
    int n = A.size();
    for(;i<n;i++){
        int count = (i+1)*(n-i);
        if(count % 2 != 0)
            res ^= A[i];
    }
    return res;
}

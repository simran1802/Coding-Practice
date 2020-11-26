int Solution::solve(const vector<int> &A) {
    int n=A.size();
    if(n<3)
        return n;
    vector<unordered_map<int,int>> dp(n);
    int max_len=2;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int dif=abs(A[j]-A[i]);
            if(dp[i].find(dif)!=dp[i].end())
                dp[j][dif] = dp[i][dif]+1;
            else
                dp[j][dif] = 2;
            max_len = max(max_len,dp[j][dif]);
        }
    }
    return max_len;
}

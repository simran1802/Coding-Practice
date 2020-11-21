int Solution::solve(string A, string B) {
    int m=A.size(), n = B.size();
    int dp[m+1][n+1];
    
    for(int i=0;i<=n;i++)
        dp[0][i]=0;
    for(int j=0;j<=m;j++)
        dp[j][0]=0;
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(A[i-1]==B[j-1])
                dp[i][j] = 1+dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[m][n];
}

int Solution::minPathSum(vector<vector<int> > &A) {
    int m=A.size(),n=A[0].size();
    int dp[m][n],i,j;
    dp[0][0]=A[0][0];
    for(i=1;i<n;i++)
    {
    dp[0][i]=A[0][i]+dp[0][i-1];
    }
    for(i=1;i<m;i++)
    {
    dp[i][0]=A[i][0]+dp[i-1][0];
    }
    for(i=1;i<m;i++)
    {
    for(j=1;j<n;j++)
    {
    dp[i][j]=A[i][j]+min(dp[i-1][j],dp[i][j-1]);
    }
    }
    return dp[m-1][n-1];
}

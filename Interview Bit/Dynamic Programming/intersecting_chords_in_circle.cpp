int Solution::chordCnt(int A) {
    long long int dp[A+1];
    memset(dp,0,sizeof(dp));
    dp[0]=dp[1]=1;
    for(int i=2;i<=A;i++){
    for(int j=0;j<i;j++)
    dp[i]=(dp[i]+(dp[j]*dp[i-1-j])%1000000007)%1000000007;
    }
    return dp[A];
}

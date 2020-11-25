int Solution::climbStairs(int A) {
    int dp[10000]={0};
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    if(dp[A]!=0)
        return dp[A];
    for(int i=3;i<=A;i++)
        dp[i] = dp[i-1]+dp[i-2];
    return dp[A];
}

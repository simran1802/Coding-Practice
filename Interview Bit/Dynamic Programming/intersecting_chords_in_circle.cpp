int Solution::chordCnt(int A) {
    #define N 1000000007
    long long int dp[A+1];
    memset(dp,0,sizeof(dp));
    dp[0]=dp[1]=1;
    for(int i=2;i<=A;i++){
        int left=0, right=i-1;
        while(left<=i-1){
            dp[i] = (dp[i]+(dp[left]*dp[right])%N)%N;
            left++;
            right--;
        }
    }
    return dp[A];
}

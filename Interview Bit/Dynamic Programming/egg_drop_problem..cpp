int Solution::solve(int A, int B) {
    vector<vector<int>> dp(B+1,vector<int> (A+1,0));
    int x=0;
    
    while(dp[x][A] < B){
        x++;
        for(int i=1;i<=A;i++){
            dp[x][i] = dp[x-1][i-1] + dp[x-1][i]+1;
        }
    }
    return x;
}

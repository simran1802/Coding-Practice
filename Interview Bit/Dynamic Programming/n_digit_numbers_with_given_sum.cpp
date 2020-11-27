#define m 1000000007
int Solution::solve(int A, int B) {
    const int M = 1e9 + 7;
    long long dp[B+1] = {0};
    
    if(A==0) 
        return 0;
    A--;
    
    for(int i = 1 ; i <= min(B,9) ; i++) 
        dp[i] = 1;
    while(A--) 
    {
        for(int i = B - 1 ; i >= 0; i--) 
        {
            for(int j = 1 ; j < min(B, 10) ; j++) 
                if(i + j <= B)
                    dp[i+j] = (dp[i+j] + dp[i])%M;
        }
    }
    return dp[B];
    
}

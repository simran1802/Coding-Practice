class Solution {
public:
    int helper(vector<int> &dp,int n){
        if(n<=2)
            return n;
        if(dp[n]!=0)
            return dp[n];
        dp[n] = helper(dp,n-1) + helper(dp,n-2);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,0); 
        int ans = helper(dp,n);
        return ans;
    }
};

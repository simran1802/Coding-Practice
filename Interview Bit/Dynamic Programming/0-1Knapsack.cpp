int knapsack(vector<int>& wt, vector<int>& val, int W, int n, vector<vector<int>>& dp)
{
    if(n == 0 || W == 0)
        return 0;
    if(dp[n][W] != -1)
        return dp[n][W];
    
    if(wt[n-1] <= W)
    return dp[n][W] = max(val[n-1] + knapsack(wt, val, W-wt[n-1], n-1, dp), knapsack(wt, val, W, n-1, dp));
    else
    return dp[n][W] = knapsack(wt, val, W, n-1, dp);
}

int Solution::solve(vector<int> &val, vector<int> &wt, int W) {
    int n = wt.size();
    vector<vector<int>> dp(n+1 , vector<int> (W+1, -1));
    return knapsack(wt, val, W, n, dp);
}

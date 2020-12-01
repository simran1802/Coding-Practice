int helper(vector<vector<int>> a,int n){
    int cur_sum=a[0][0];
    int max_sum=a[0][0];
    for(int i=1;i<n;i++){
        cur_sum += a[i][0];
        cur_sum = max(cur_sum,a[i][0]);
        max_sum = max(cur_sum,max_sum);
    }
    return max_sum;
}
int Solution::solve(vector<vector<int> > &A) {
    int n=A.size(), m=A[0].size();
    vector<vector<int>> pre_sum(n,vector<int>(1,0));
    int res=INT_MIN;
    for(int i=m-1;i>=0;i--){
        for(int j=0;j<n;j++){
            pre_sum[j][0] += A[j][i];
        }
        int max_far = helper(pre_sum,n);
        res = max(res,max_far);
    }
    return res;
    
}

int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    for(int i=1;i<n;i++){
        for(int j=0;j<A[i].size();j++){
            if(A[i][j]==1)
                A[i][j] += A[i-1][j];
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        sort(A[i].begin(),A[i].end(),greater());
        for(int j=0;j<A[i].size();j++){
            res = max(res,A[i][j]*(j+1));
        }
    }
    return res;
    
}

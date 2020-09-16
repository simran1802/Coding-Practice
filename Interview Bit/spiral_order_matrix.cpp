vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> res(A, vector<int> (A));
    int i=0, n = A-1;
    int nm = 1;
    while(i<=n){
        for(int k =i; k <=n; ++k){
            res[i][k] = nm++;
        }
        for(int k = i+1; k <=n;++k){
            res[k][n] = nm++;
        }
        for(int k = n-1; k >=i; --k){
            res[n][k] = nm++;
        }
        for(int k = n - 1;k > i;--k){
            res[k][i] = nm++;
        }
        ++i;
        --n;
    }
    return res;
}

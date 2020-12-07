int Solution::solve(vector<vector<int> > &A) {
    int n=A.size(),count=0;
    vector<int> v(n,1);
    int i,j,ans=INT_MIN;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(A[j][1] < A[i][0])
                v[i] = max(v[i],v[j]+1);
        }
        ans = max(ans,v[i]);
    }
    return ans;
}

int Solution::solve(vector<vector<int> > &A) {
    int m=A.size(), n=A[0].size();
    int max_area=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]==0)
                continue;
            else{
            int x= i>0 && j>0 ? A[i-1][j-1]:0;
            int y = i>0 ? A[i-1][j]:0;
            int z = j>0?A[i][j-1]:0;
            A[i][j] = max(A[i][j],min({x,y,z})+1);
            max_area = max(max_area,A[i][j]);
                
            }
        }
    }
    return max_area*max_area;
}

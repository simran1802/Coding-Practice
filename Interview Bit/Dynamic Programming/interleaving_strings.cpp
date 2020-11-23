int Solution::isInterleave(string A, string B, string C) {
    int a=A.length(), b=B.length(), c=C.length();
    bool ans[a+1][b+1];
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            if(i==0 && j==0)
                ans[i][j]=1;
            else if(i==0)
                ans[i][j] = C[i+j-1]==B[j-1] && ans[i][j-1];
            else if(j==0)
                ans[i][j] = C[i+j-1]==A[i-1] && ans[i-1][j];
            else
                ans[i][j]=((C[i+j-1]==A[i-1]&&ans[i-1][j])||(C[i+j-1]==B[j-1]&&ans[i][j-1]));
        }
    }
    return ans[a][b];
}

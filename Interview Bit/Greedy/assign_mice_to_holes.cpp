int Solution::mice(vector<int> &A, vector<int> &B) {
    int m=A.size(), n=B.size(),res=INT_MIN;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i=0;i<m;i++){
        res = max(res,abs(A[i]-B[i]));
    }
    return res;
}

int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i=0,j=0,k=0;
    int res = INT_MAX;
    while(i<A.size() && j<B.size() && k<C.size()){
        int t1 = max(abs(A[i]-B[j]),abs(B[j]-C[k]));
        int t2 = max(abs(C[k]-A[i]),t1);
        if(t2 < res)
            res = t2;
        if(A[i] <= B[j] && A[i] <= C[k]){
            i++;
        }
        else if(B[j] <= A[i] && B[j] <= C[k]){
            j++;
        }
        else
            k++;
    }
    return res;
}

int Solution::diffPossible(vector<int> &A, int B) {
    int n = A.size();
    int i=0,j=n-1;
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            if(abs(A[i]-A[j]) == B)
                return 1;
            else if(abs(A[i]-A[j]) < B)
                break;
        }
    }
    return 0;
}

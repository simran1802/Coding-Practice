int Solution::canJump(vector<int> &A) {
    int n=A.size();
    int end=0;
    for(int i=0;i<n;i++){
        if(i>end)
            return 0;
        end = max(end,i+A[i]);
    }
    return 1;
}

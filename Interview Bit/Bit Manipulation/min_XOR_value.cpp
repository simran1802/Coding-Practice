int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int min_val = INT_MAX;
    int t;
    for(int i=0;i<A.size()-1;i++){
        t = A[i]^A[i+1];
        min_val = min(min_val,t);
    }
    return min_val;
}

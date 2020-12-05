int Solution::maxProfit(const vector<int> &A) {
    int n=A.size(),res=0,max_cur=0;
    for(int i=1;i<n;i++){
        res = max(0,res+=A[i]-A[i-1]);
        max_cur = max(max_cur,res);
    }
    return max_cur;
}

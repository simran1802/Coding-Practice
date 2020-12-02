int Solution::maxProfit(const vector<int> &A) {
    if(A.size()==0||A.size()==1)
        return 0;
    int fb = INT_MIN, sb = INT_MIN, fs=INT_MIN, ss=INT_MIN;
    for(int i=0; i<A.size(); i++)
    {
    fb = max(fb, -A[i]);
    fs = max(fs, fb+A[i]);
    sb = max(sb, fs-A[i]);
    ss = max(ss, sb+A[i]);
    }
    return ss;
    
}

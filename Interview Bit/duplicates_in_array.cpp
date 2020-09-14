int Solution::repeatedNumber(const vector<int> &A) {
    vector<int> B=A;
    sort(B.begin(),B.end());
    for(int i=1;i<B.size();i++){
        if(B[i] == B[i-1])
            return B[i];
    }
    return -1;
}

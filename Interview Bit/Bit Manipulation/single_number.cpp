int Solution::singleNumber(const vector<int> &A) {
    int ans = A[0]^A[1];
    if(A.size()==1){
        ans = A[0];
    }
    for(int i=2;i<A.size();i++){
        ans ^= A[i];
    }
    return ans;
    
}

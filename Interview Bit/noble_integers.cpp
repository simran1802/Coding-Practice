int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    if(A[A.size()-1] == 0)
        return 1;
    for(int i=0;i<A.size();i++){
        if(A[i]!=A[i+1]){
            int count = A.size()-i-1;
            if(count == A[i])
                return 1;
        }
        
    }
    return -1;
}

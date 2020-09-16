vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int> res;
    vector B(A);
    int n = A.size();
    sort(B.begin(),B.end());
    for(int i=0;i<n;i++){
        if(A[i] != B[i]){
            res.push_back(i);
        bool found = false;
        for(int j=n-1;j>i;j--){
            if(A[j] != B[j]){
                found = true;
                res.push_back(j);
                break;
            }
        }
        if(!found){
            res.push_back(n-1);
        }
        break;
    }
    }
    if(res.size() < 1){
        res.push_back(-1);
        
        
    }
    return res;
}

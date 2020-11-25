int Solution::lis(const vector<int> &A) {
    int n=A.size();
    int res[n];
    res[0]=1;
    for(int i=1;i<n;i++){
        res[i]=1;
        for (int j = 0; j < i; j++ )   
            if (A[i] > A[j] && res[i] < res[j] + 1)  
                res[i] = res[j] + 1;  
        
    }
    return *max_element(res,res+n);
}

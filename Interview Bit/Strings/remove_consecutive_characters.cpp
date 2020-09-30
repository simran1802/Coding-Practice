string Solution::solve(string A, int B) {
    string res = "";
    int i;
    for(i=0;i<A.size()-B+1;i++){
        int j=1;
        while(i+j < A.size() && A[i+j]==A[i])
            j++;
            
            if(j!=B)
                res += A[i];
            else
                i = i+j-1;
                
            
    }
    while(i<A.size()){
        res += A[i];
        i++;
    }
    return res;
}

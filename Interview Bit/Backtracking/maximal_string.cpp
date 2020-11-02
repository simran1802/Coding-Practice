void backtrack(string A, int B,string &res){
    if(B==0)
        return ;
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A.size();j++){
            if(A[i] < A[j])
                swap(A[i],A[j]);
                if(A>res)
                    res=A;
                backtrack(A,B-1,res);
                swap(A[i],A[j]);
        }
    }
}

string Solution::solve(string A, int B) {
    string res;
    backtrack(A,B,res);
    return res;
}

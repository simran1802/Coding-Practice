int Solution::solve(string A) {
    int a=0,b=0;
    int n = A.size();
    for(int i=0;i<n;i++){
        if(A[i] == '(')
            a++;
        else if(A[i]==')' && a>0)
            a--;
        else
            b++;
    }
    return (a+b);
}

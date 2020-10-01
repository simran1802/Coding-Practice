int Solution::solve(int A) {
    if(A<=1) return A;
    long n = ceil(log(A+1ll)/log(2ll));
    long n2 = 1ll<<(n-1);
    return( (((n-1)*n2/2 + (A - n2 + 1)) + Solution::solve(A-n2) )%1000000007 );
}

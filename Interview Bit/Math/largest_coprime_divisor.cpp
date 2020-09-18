int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int Solution::cpFact(int A, int B) {
    while(gcd(A,B) != 1){
        A /= gcd(A,B);
    }
    return A;
}

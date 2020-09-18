int Solution::reverse(int A) {
    long long rev=0,rem,x=INT_MIN,y=INT_MAX;
    while(A!=0){
        rem = A%10;
        rev = rev*10 + rem;
        A = A/10;
    }
    if(rev<x || rev>y)
        return 0;
    else
        return rev;
}

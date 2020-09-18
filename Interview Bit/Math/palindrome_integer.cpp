int Solution::isPalindrome(int A) {
    long long rev=0,rem,q;
    q=A;
    if(A < 0)
        return false;
    while(q!=0){
        rem = q%10;
        rev = rev*10 + rem;
        q=q/10;
    }
    if(rev==A)
        return true;
    else
        return false;
}

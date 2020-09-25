int Solution::power(string A) {
    int n = A.size();
    if(n==0)
        return 0;
    int num = 0;
    for(int i=0;i<n;i++){
        num = num*10 + (A[i]-'0');
        if(num > INT_MAX)
            return 0;
    }
    int temp = num;
    if(temp == 1)
        return 0;
    return (floor(log2(temp)) == ceil(log2(temp))) ? 1:0;
}

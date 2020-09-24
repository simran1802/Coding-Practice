int Solution::isNumber(const string A) {
    int n=A.size(), i=0, sign=1, base=0, num_digits=0, num_decimal=0;
    
    while(A[i]==' ')
        i++;
    
    if (A[i] == '-' || A[i] == '+') 
        i++;
        
    while((A[i] >= '0' && A[i] <= '9') || A[i]=='.'){
        if(A[i]=='.')
            num_decimal++;
        else
            num_digits++;
        i++;
    }
    
    if(num_digits<1 || num_decimal>1 || A[i-1]=='.')
        return 0;
    
    if(A[i]=='e'){
        i++;
        
        if (A[i] == '-' || A[i] == '+')
            i++;
        
        while(A[i] >= '0' && A[i] <= '9'){
            num_digits++;
            i++;
        }
    
        if(num_digits<1)
            return 0;
    }
    
    while(A[i]==' ')
        i++;
    
    if(i==n)
        return 1;
    
    return 0;
}

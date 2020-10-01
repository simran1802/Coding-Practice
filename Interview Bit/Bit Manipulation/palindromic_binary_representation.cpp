int Solution::solve(int A) {
    if(A==1) {
    return 1;
    }
    
    int n = 0;
    
    int a[32];
    int s[32];
    a[1] = 1;
    s[1] = 1;
    
    int l = 1;
    
    for(int i=2;i<32;i++) {
        if(i%2==0) {
            a[i] = a[i-1];
        }
        else {
            a[i] = 2 * a[i-1];
        }
        
        s[i] = a[i] + s[i-1];
        
        if(s[i] >= A) {
            l = i;
            break;
        }
    }
    
    n |= (1<<(l-1));
    n |= (1<<0);
    
    A -= s[l-1];
    
    int f = l-2;
    l -= 2;
    int x = 1;
    
    while(A>1) {
        if(A > a[l]) {
            n |= (1<<f);
            n |= (1<<x);
            A -= a[l];
        }
            
        
        f--;
        x++;
        l -= 2;
    }
    
    return n;
    
}

int Solution::isScramble(const string A, const string B) {
    int m=A.length(), n=B.length();
    if(m!=n)
        return 0;
    if(m==0)
        return 1;
    if(A==B)
        return 1;
    string temp_a = A, temp_b = B;
    sort(temp_a.begin(),temp_a.end());
    sort(temp_b.begin(),temp_b.end());
    if(temp_a!=temp_b)
        return 0;
    for(int i=1;i<m;i++){
        if(isScramble(A.substr(0,i),B.substr(0,i))&&isScramble(A.substr(i,n-i),B.substr(i,n-i)))
            return 1;
        if(isScramble(A.substr(0,i),B.substr(n-i,i))&&isScramble(A.substr(i,n-i),B.substr(0,n-i)))
            return 1;
    }
    return 0;
    
}

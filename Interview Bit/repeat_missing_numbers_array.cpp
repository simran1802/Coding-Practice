vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long n = A.size();
    long s1=0,s2=0;
    for(int i:A){
        s1 += i;
        s2 += ((long)i)*i;
    }
    long sum1 = n*(n+1)/2;
    long sum2 = n*(n+1)*(2*n+1)/6;
    
    long d1 = s1-sum1;
    long d2 = s2-sum2;
    
    long diff = d1;
    long sum = d2/d1;
    
    long rep = (sum+diff)/2;
    long miss = (sum-diff)/2;
    
    return {(int) rep, (int) miss};
}

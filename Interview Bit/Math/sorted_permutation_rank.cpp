long long fact(long n){
    return (n==1 || n==0) ? 1 : (n * fact(n-1))%1000003;
}
int Solution::findRank(string A) {
    string s=A;
    int ans=0;
    int n = s.size();
    for(int i=0;i<n-1;i++){
        int c=0;
        for(int j=i+1;j<n;j++){
            if(s[j] < s[i])
                c++;
        }
        ans += ((c*fact(n-i-1)))%1000003;
    }
    return (ans+1)%1000003;
}

typedef long long int ll;
int Solution::solve(string A) {
    ll n = A.size();
    ll sum = 0;
    for(int i=0;i<n;i++){
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U')
            sum += n-i;
    }
    return sum%10003;
}

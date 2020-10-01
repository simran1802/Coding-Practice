typedef long long int ll;
#define mod 1000000007
int Solution::cntBits(vector<int> &A) {
    ll ans=0;
    for(int i=0,iset=0;i<32;i++){
        unsigned int x = 1<<i;
        ll a=0,b=0;
        for(int j=0;j<A.size();j++){
            if(A[j]&x)
                a++;
            else
                b++;
                
        }
        ans=(ans%mod+ (2*(a%mod)*(b%mod))%mod)%mod;
    }
    return ans;
}

int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(n==0)
        return 1%d;
    
    long ans=1,base=x;
    while(n>0){
        if(n%2 == 0){
            base = (base * base)%d;
            n= n/2;
        }
        else{
            ans = (ans*base)%d;
            n--;
        }
    }
    if(ans<0)
    ans = (ans+d)%d;
    return ans;
}

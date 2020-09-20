int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long ans;
    if(x==0) return 0;
    if(n==0) return 1;
    if(x<0)  return pow(d+x,n,d);
    
    long temp = pow(x,n/2,d);
    if(n%2==0)
        ans = ((temp%d)*(temp%d))%d;
    else
        ans = ((((x%d)*(temp%d))%d)*(temp%d))%d;
    
    return (int)ans%d;
}

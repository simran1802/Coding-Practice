string Solution::multiply(string A, string B) {
    int n = A.size();
    int m = B.size();
    string ans(n+m,'0');
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            int res = (A[i]-'0') * (B[j]-'0') + (ans[i+j+1]-'0');
            ans[i+j+1] = res%10+'0';
            ans[i+j] += res/10;
            
        }
    }
    for(int i=0;i<m+n;i++){
        if(ans[i] != '0')
            return ans.substr(i);
            
    }
    return "0";
}

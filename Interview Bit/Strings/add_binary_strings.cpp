string Solution::addBinary(string A, string B) {
    int i=A.size()-1, j=B.size()-1,carry=0;
    int len = max(i,j);
    string res = i>j ? A:B;
    while(i>=0 || j>=0){
        if(i>=0)
            carry += (A[i--]-'0');
        if(j>=0)
            carry += (B[j--]-'0');
        res[len--] = (carry%2 + '0');
        carry /= 2;
        
    }
    return carry ? "1"+res : res;
}

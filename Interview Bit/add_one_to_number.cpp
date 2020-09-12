vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size();
    int carry=1;
    vector<int> res;
    for(long long i=n-1;i>=0;i--){
        int sum = A[i] + carry;
        res.push_back(sum%10);
        carry = sum/10;
    }
    if(carry)
        res.push_back(carry);
    while(res[res.size()-1]==0)
        res.pop_back();
    reverse(res.begin(),res.end());
    return res;
}

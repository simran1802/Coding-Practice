typedef long long ll;
int Solution::maxSpecialProduct(vector<int> &A) {
    ll i=0, ans=INT_MIN;
    stack<int> stk;
    for(i=0;i<A.size();i++){
        while(!stk.empty() && A[i] >= A[stk.top()]){
            stk.pop();
            if(!stk.empty()){
                ans = max(ans,stk.top()*i);
            }
        }
        stk.push(i);
    }
    return ans<0 ? 0 : ans%(ll)(pow(10,9)+7);
}

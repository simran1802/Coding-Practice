vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int> stk;
    int n = A.size();
    vector<int> ans(n,-1);
    for(int i=0;i<n;i++){
        while(!stk.empty() && A[stk.top()] >= A[i])
            stk.pop();
            if(!stk.empty())
                ans[i] = A[stk.top()];
            stk.push(i);
        }
        return ans;
    
    
}

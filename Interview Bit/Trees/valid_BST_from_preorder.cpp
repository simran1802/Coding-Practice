int Solution::solve(vector<int> &A) {
    stack<int> stk;
    int root=INT_MIN;
    for(int i=0;i<A.size();i++){
        if(root>A[i])
            return 0;
        while(!stk.empty() && stk.top() < A[i]){
            root = stk.top();
            stk.pop();
        }
        stk.push(A[i]);
    }
    return 1;
}


string Solution::reverseString(string A) {
    int n = A.size();
    stack<char> stk;
    for(int i=0;i<n;i++){
        stk.push(A[i]);
    }
    for(int i=0;i<n;i++){
        A[i] = stk.top();
        stk.pop();
    }
    return A;
}

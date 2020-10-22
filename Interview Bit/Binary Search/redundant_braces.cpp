int Solution::braces(string A) {
    stack<char> stk;
    for(int i=0;i<A.size();i++){
        if(A[i]!=')'){
            stk.push(A[i]);
            continue;
            
        }
        int cnt=0;
            while(stk.top()!='(')cnt++,stk.pop();
            stk.pop();
            if(cnt<=1)return 1;
        }
        return 0;
    
}

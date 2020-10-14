int Solution::evalRPN(vector<string> &A) {
    stack<int> stk;
    for(auto s : A){
        if(s.size()>1 || isdigit(s[0])){
            stk.push(stoi(s));
        }
        else{
            auto temp2 = stk.top();
            stk.pop();
            auto temp1 = stk.top();
            stk.pop();
            switch(s[0]){
                case '+': temp1+=temp2; break;
                case '-': temp1-=temp2; break;
                case '*': temp1*=temp2; break;
                case '/': temp1/=temp2; break;            }
            stk.push(temp1);
        }
    }
    return stk.top();
}

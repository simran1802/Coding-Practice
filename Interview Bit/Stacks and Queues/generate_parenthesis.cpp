int Solution::isValid(string a) {
    stack<char>b;
    for(int i=0;i<a.size();i++){
        if(a[i]=='('||a[i]=='{'||a[i]=='['){
            b.push(a[i]);
            continue;
        }
        if(b.empty())
            return 0;
        else if(a[i]==')'&&b.top()!='(')
            return 0;
        else if(a[i]==']'&&b.top()!='[')
            return 0;
        else if(a[i]=='}'&&b.top()!='{')
            return 0;
        b.pop();
    }
    return b.empty();
}

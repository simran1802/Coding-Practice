void helper(vector<string> &res,string &cur,int req,int l,int r){
    if(l>req || r>req)
        return ;
    if(r>l)
        return ;
    if(l==req && r==req){
        res.push_back(cur);
        return ;
    }
    cur.push_back('(');
    helper(res,cur,req,l+1,r);
    cur.pop_back();
    
    cur.push_back(')');
    helper(res,cur,req,l,r+1);
    cur.pop_back();
    return ;
    
}

vector<string> Solution::generateParenthesis(int A) {
    vector<string> res;
    string cur="";
    helper(res,cur,A,0,0);
    return res;
}

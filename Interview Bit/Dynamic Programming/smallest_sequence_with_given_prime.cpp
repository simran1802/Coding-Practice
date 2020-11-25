vector<int> Solution::solve(int A, int B, int C, int D) {
    vector<int> res;
    set<int> s;
    s.insert(A);
    s.insert(B);
    s.insert(C);
    if(D==0)
        return res;
    while(!s.empty()){
        int a = *(s.begin());
        s.erase(s.begin());
        res.push_back(a);
        if(res.size()==D)
            break;
        s.insert(a*A);
        s.insert(a*B);
        s.insert(a*C);
    }
    return res;
}

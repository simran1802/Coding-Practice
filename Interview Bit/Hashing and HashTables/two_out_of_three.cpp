vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    set<int> st, ansSt;
    
    for(int i=0;i<A.size();i++){
        st.insert(A[i]);
    }
    for(int i=0;i<B.size();i++)
    if(st.find(B[i])!=st.end())
    ansSt.insert(B[i]);
    
    for(int i=0;i<B.size();i++)
    st.insert(B[i]);
    
    for(int i=0;i<C.size();i++)
    if(st.find(C[i])!=st.end())
    ansSt.insert(C[i]);
    
    vector<int> ans;
    for(auto i:ansSt)
    ans.push_back(i);
    
    return ans;
    
}

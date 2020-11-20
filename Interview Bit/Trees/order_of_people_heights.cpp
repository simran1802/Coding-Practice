bool helper(pair<int,int> p1,pair<int,int> p2){
    if(p1.first==p2.first)

    return p1.second<p2.second;
    return p1.first>p2.first;
    
}

vector<int> Solution::order(vector<int> &A, vector<int> &B) {
    int n = A.size();
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
        v[i] = {A[i],B[i]};
    sort(v.begin(),v.end(),helper);
    vector<int> res;
    for(int i=0;i<n;i++)
        res.insert(res.begin()+v[i].second ,v[i].first);
    return res;
    
}

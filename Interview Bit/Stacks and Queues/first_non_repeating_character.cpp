string Solution::solve(string A) {
    string res;
    int j = 0;
    vector<int> q(26, 0);
    for (int i=0; i<A.size(); i++){
        q[A[i]-'a']++;
        while (q[A[j]-'a']>1) j++;
        res.push_back(j>i ? '#' : A[j]);
    }
    return res;
}

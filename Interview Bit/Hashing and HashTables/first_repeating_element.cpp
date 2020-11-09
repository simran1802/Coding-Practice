int Solution::solve(vector<int> &A) {
    unordered_map<int,int> mp;
    int n = A.size();
    for(int i=0;i<n;i++){
        mp[A[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[A[i]] > 1)
            return A[i];
    }
    return -1;
}

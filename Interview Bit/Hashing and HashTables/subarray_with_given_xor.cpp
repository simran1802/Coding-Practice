int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    for(int i=1;i<n;i++){
        A[i] = A[i-1]^A[i];
    }
    int ans=0;
    unordered_map<int,int> mp;
    mp[0] =1;
    for(auto x:A){
        int target = x^B;
        ans += mp[target];
        mp[x]++;
    }
    return ans;
}

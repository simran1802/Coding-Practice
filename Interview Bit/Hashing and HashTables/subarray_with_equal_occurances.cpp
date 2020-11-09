int Solution::solve(vector<int> &A, int B, int C) {
    int sum=0, ans=0;
    unordered_map<int,int> mp;
    mp[0]=1;
    for(auto i:A){
        if(i==B)
            sum += 1;
        else if(i==C)
            sum += -1;
        ans += mp[sum];
        mp[sum]++;
    }
    return ans;
}

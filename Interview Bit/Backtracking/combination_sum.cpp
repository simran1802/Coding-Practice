void generate_sum(vector<vector<int>> &ans,vector<int> cur,vector<int> &nums,set<vector<int>> &S,int target){
    int n = nums.size();
    if(target<0)
        return;
    if(target==0){
        sort(cur.begin(),cur.end());
    if(S.insert(cur).second == false)
        return;
    S.insert(cur);
    ans.push_back(cur);
    return;
    }
    for(int i=0;i<n;i++){
        cur.push_back(nums[i]);
        target -= nums[i];
        generate_sum(ans,cur,nums,S,target);
        cur.pop_back();
        target += nums[i];
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<int> cur;
    vector<vector<int>> ans;
    set<vector<int>> S;
    generate_sum(ans,cur,A,S,B);
    sort(ans.begin(),ans.end());
    return ans;
}

vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    int n = A.size();
    sort(A.rbegin(),A.rend());
    sort(B.rbegin(),B.rend());
    
    priority_queue<pair<int,pair<int,int>>>pq;
    vector<int> ans;
    for(int i=0;i<n;i++){
        pq.push({A[0]+B[i],{0,i}});
    }
    while(ans.size() < n){
        auto p = pq.top();
        pq.pop();
        int sum = p.first;
        auto index = p.second;
        int i = index.first, j = index.second;
        ans.push_back(sum);
        pq.push({A[i+1]+B[j],{i+1,j}});
    }
    return ans;
}

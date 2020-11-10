vector<int> Solution::solve(vector<vector<int> > &A) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
    vector<int> res;
    int n = A.size(), m = A[0].size();
    vector<int> index(n,0);
    for(int i=0;i<n;i++){
        min_heap.push({A[i][0],i});
    }
    while(!min_heap.empty()){
        pair<int,int> p = min_heap.top();
        min_heap.pop();
        res.push_back(p.first);
        index[p.second]++;
        if(index[p.second] < m)
            min_heap.push({A[p.second][index[p.second]],p.second});
    }
    return res;
}

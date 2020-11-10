int Solution::solve(vector<int> &A, int B) {
    priority_queue<int> pq;
    int res=0;
    for(auto i:A){
        pq.push(i);
    }
    while(B-- && !pq.empty()){
        res += pq.top();
        int k = pq.top();
        pq.pop();
        k--;
        if(k>0)
            pq.push(k);
    }
    return res;
}

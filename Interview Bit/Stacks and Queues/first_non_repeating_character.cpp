string Solution::solve(string A) {
    queue<char> q;
    int hash[26];
    memset(hash,0,sizeof(hash));
    
    
    for(int i = 0; i < A.size(); i++){
        hash[A[i]-97]++;
        q.push(A[i]);
        while(!q.empty()&&hash[q.front()-97]>1) q.pop();
        if(q.empty()) A[i]='#';
        else A[i] = q.front();

    }
    
    return A;

}

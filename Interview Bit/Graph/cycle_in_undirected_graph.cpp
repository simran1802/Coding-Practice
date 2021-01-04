int find(int x,vector<int>& parent){
    while(parent[x]!=-1)
        x=parent[x];
    return x;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> par(A+1,-1);
    for(int i=0;i<B.size();i++){
        int x=find(B[i][0],par);
        int y=find(B[i][1],par);
        if(x==y)return 1;
        par[x]=y; 
 }
    return 0;
}

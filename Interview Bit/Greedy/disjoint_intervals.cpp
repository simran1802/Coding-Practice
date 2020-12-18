bool cmp(vector<int> A,vector<int> B){
    return A[1]<B[1];
}
int Solution::solve(vector<vector<int> > &A) {
    sort(A.begin(),A.end(),cmp);
    int ans=1,id=0,overlap=0;
    for(int i=1;i<A.size();i++){
        if(A[id][1] < A[i][0]){
            ans++;
            id += overlap+1;
            overlap=0;
        }
        else{
            overlap++;
        }
    }
    return ans;
}

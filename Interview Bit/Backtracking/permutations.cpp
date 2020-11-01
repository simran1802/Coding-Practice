void helper(vector<int> &A,vector<vector<int>> &ans,int i,int j){
    int n = A.size();
    if(i==n){
        ans.push_back(A);
        return ;
    }
    for(j=i;j<n;j++){
        swap(A[i],A[j]);
        helper(A,ans,i+1,j+1);
        swap(A[i],A[j]);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> res;
    int n = A.size();
    helper(A,res,0,0);
    return res;
}

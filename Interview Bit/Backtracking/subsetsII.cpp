void subset(vector<vector<int>> &res,vector<int> &temp,vector<int> &A,int start){
    res.push_back(temp);
    for(int i=start;i<A.size();i++){
        if(i==start || A[i-1]!=A[i]){
            temp.push_back(A[i]);
            subset(res,temp,A,i+1);
            temp.pop_back();
            
        }
    }
    return ;
    
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<int> temp;
    vector<vector<int>> res;
    subset(res,temp,A,0);
    return res;
}

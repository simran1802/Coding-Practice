vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> res(A);
    int i;
    for(i=0;i<A;i++){
        if(i==0){
            res[i].push_back(1);
        }
        else if(i==1){
            res[i].push_back(1);
            res[i].push_back(1);
        }
        else if(i>1){
            res[i].push_back(1);
            for(int k=0;k<res[i-1].size()-1;k++){
                int sum = res[i-1][k] + res[i-1][k+1];
                res[i].push_back(sum);
            }
            res[i].push_back(1);
        }
    }
    return res;
}

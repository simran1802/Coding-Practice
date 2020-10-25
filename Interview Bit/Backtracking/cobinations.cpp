vector<vector<int> > Solution::combine(int A, int B) {
    vector<vector<int>>ans;
    if(A<B){
        return ans;
    }
    int comb[A] = {0};
    for(int i=0;i<B;i++){
        comb[i] = 1;
    }
    sort(comb, comb+A);
    do{
        vector<int> x;
        for(int i=0;i<A;i++){
            if(comb[i]==1){
                x.push_back(i+1);
            }
        }
        ans.push_back(x);
    }while(next_permutation(comb, comb + A ));
    sort(ans.begin(), ans.end());
    return ans;
}

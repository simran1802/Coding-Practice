int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int ans=0;
    for(int i=0;i<A.size();i++)
        ans += A[i]-B[i];
        if(ans<0)
            return -1;
        int dif=0;
        ans=0;
        for(int i=0;i<A.size();i++){
            ans += A[i]-B[i];
            if(ans<0){
                dif=i+1;
                ans=0;
            }
            
        }
    return dif;
}

int Solution::bulbs(vector<int> &A) {
    int count=0;
    int off=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==off){
            count++;
        if(off==0)
            off=1;
        else
            off=0;
        }
    }
    return count;
}

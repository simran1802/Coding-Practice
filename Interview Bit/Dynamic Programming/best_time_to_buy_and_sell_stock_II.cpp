int Solution::maxProfit(const vector<int> &A) {
    int n=A.size();
    if(n==0)
        return 0;
    int min=A[0];
    int max_profit = 0;
    for(int i=1;i<n;i++){
        if(A[i]<min)
            min = A[i];
        else{
            max_profit += A[i]-min;
            min=A[i];
        }
    }
    return max_profit;
}


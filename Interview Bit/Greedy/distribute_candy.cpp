int Solution::candy(vector<int> &A) {
    int n=A.size(),ans=0;
    vector<int> left(n,0), right(n,0);
    for(int i=0;i<n;i++){
        if(i==0 || A[i]<=A[i-1])
            left[i] = 1;
        else
            left[i] = 1+left[i-1];
    }
    for(int i=n-1;i>=0;i--){
        if(i==n-1 || A[i]<=A[i+1])
            right[i]=1;
        else
            right[i] = 1+right[i+1];
            
    }
    for(int i=0;i<n;i++){
        ans += max(left[i],right[i]);
    }
    return ans;
}

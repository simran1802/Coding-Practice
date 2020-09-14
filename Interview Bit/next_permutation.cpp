vector<int> Solution::nextPermutation(vector<int> &A) {
    int i,j;
    int n = A.size();
    for(i=n-2;i>=0;i--)
        if(A[i] < A[i+1])
            break;
        for(j=i+1;j<(n+i+1)/2;j++)
            swap(A[j],A[n+i-j]);
        if(i==-1)
            return A;
        j=i+1;
        while(A[j]<=A[i])
            j++;
        swap(A[i],A[j]);
        return A;
        
    
}

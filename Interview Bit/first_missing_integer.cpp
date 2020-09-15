int Solution::firstMissingPositive(vector<int> &A) {
    int size=A.size(),s=0,c=1;
    for(int i=0;i<size;i++)
    {
    if(A[i]>0&& A[i]<=size)
    {
    s=A[i]-1;
    swap(A[i],A[s]);
    if(A[i]!=A[s])
    i--;
    }
    }
    for(int i=0;i<size;i++)
    {
    if(A[i]!=c)
    {
    return c;
    }
    c++;
    }
}

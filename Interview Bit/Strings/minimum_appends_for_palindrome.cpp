int Solution::solve(string A) {
    int count=0;
    int n=A.size();
    int i=0,j=n-1;
    while(i<j){
        if(A[i]==A[j]){
            i++;
            j--;
        }
        else{
            i++;
            count += (n-j);
            j = n-1;
        }
    }
    return count;
}

int Solution::solve(string A) {
    int count=0;
    int i=0;
    int n=A.size();
    int j=n-1;
    while(i<j){
    if(A[i]!=A[j]){
        count++;
        i++;
       }
       else {
           i++;
           j--;
       }
    
    }
    if(count>1)
        return 0;
    else
        return 1;
    
}

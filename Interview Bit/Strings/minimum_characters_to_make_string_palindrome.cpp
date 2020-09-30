int Solution::solve(string A) {
    int left=0;
    int right=A.size()-1;
    int count=0;
    while(left < right){
        if(A[left] == A[right]){
            left++;
            right--;
        }
        else{
            if(left==0){
                count++;
                right--;
            }
            else{
                count += left;
                left=0;
            }
        }
    }
    return count;
}

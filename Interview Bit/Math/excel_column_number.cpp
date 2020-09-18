int Solution::titleToNumber(string A) {
    int count=0;
    for(int i=0;i<A.size();i++){
        count *= 26;
        count += A[i] - 'A' + 1;
    }
    return count;
}

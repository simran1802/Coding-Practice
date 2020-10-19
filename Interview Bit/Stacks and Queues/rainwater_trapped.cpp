int Solution::trap(const vector<int> &A) {
    int left=0;
    int right = A.size()-1;
    int level=0,water=0;
    while(left<=right){
        int low = A[A[left] <= A[right] ? left++:right--];
        level = max(level,low);
        water += level-low;
    }
    return water;
    
}

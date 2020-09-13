int Solution::maxSubArray(const vector<int> &A) {
    int curr_max = 0;
    int global_max = INT_MIN;
    for(int i:A){
        curr_max = max(i,curr_max+i);
        if(curr_max > global_max)
            global_max = curr_max;
    }
    return global_max;
}

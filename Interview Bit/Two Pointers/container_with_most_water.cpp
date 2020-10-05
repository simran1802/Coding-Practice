int Solution::maxArea(vector<int> &A) {
    int start=0, end = A.size()-1, area=0;
    while(start < end){
        area = max(area, min(A[start],A[end])*(end-start));
        if(A[start] < A[end])
            start++;
        else
            end--;
    }
    return area;
}

void b_search1(vector<int> A, int B,int start,int end,int &mn){
    while(start<=end){
        int mid= start+(end-start)/2;
        if(A[mid] == B)
            mn = min(mn,mid);
        if(A[mid] < B)
            start = mid+1;
        else
            end = mid-1;
    }
}

void b_search2(vector<int> A, int B,int start,int end,int &mx){
    while(start<=end)
    {
        int mid = start + (end - start)/2;
        if(A[mid]==B)
            mx = max(mx,mid);
        if(A[mid] <= B)
            start = mid+1;
        else 
            end = mid-1;
    }
}

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n = A.size();
    int mn = INT_MAX, mx = INT_MIN;
    b_search1(A,B,0,n-1,mn);
    b_search2(A,B,0,n-1,mx);
    if(mn == INT_MAX)
        mn = -1;
    if(mx == INT_MIN)
        mx = -1;
    return vector<int> {mn,mx};
}

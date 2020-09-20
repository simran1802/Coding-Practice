int helper(vector<int> A, int B,int low,int high){
    while(low <= high){
        int mid = (low+high)/2;
        if(A[mid] == B)
            return mid;
        if(A[mid] > A[low]){
            if(A[mid] > B && A[low] <= B)
                high = mid-1;
            else
                low = mid+1;
            
        }
        else{
            if(A[mid] < B && A[high] >= B)
                low = mid+1;
            else
                high = mid-1;
            
        }
    }
    return -1;
}
int Solution::search(const vector<int> &A, int B) {
    int n=A.size();
    int ans=helper(A,B,0,n-1);
    return ans;
}

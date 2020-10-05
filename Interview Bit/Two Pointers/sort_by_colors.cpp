void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    int start=0, end=n-1, index=0;
    while(start < end && index <= end){
        if(A[index]==0){
            A[index] = A[start];
            A[start]=0;
            start++;
            index++;
        }
        else if(A[index]==2){
            A[index] = A[end];
            A[end] = 2;
            end--;
        }
        else{
            index++;
        }
    }
}

int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size()-1;
    while(n >= 2){
        if(A[n] == A[n-1] && A[n-1]==A[n-2])
            A.erase(A.begin()+n);
        n--;
    }
    return A.size();
    
}

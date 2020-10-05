int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0,j=0;
    while(i<A.size() && j<A.size()){
        if(A[i] != B){
            A[j++]=A[i];
        }
        i++;
    }
    return j;
}

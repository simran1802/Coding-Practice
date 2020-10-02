int Solution::singleNumber(const vector<int> &A) {
    int ones=0,twos=0;
    for(int x:A){
        ones = (x^ones)&(~twos);
        twos = (x^twos)&(~ones);
    }
    return ones;
}

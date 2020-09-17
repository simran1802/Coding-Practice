vector<int> Solution::getRow(int A) {
    vector<int> res;
    int i = A+1, c=1;
    for(int j=1;j<=i;j++){
        res.push_back(c);
        c = c*(i-j)/j;
        
    }
    return res;
}

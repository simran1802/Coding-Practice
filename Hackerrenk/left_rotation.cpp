vector<int> rotLeft(vector<int> a, int d) {
    int n=a.size();
    vector<int> b(n,0);
    for(int i=0;i<n;i++){
        int index = (n+i-d)%n;
        b[index] = a[i];
    }
    return b;
    
}

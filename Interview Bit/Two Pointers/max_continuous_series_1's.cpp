vector<int> Solution::maxone(vector<int> &A, int B) {
    int start=0,i=0,j=0;
    vector<int> res;
    int max_size = 0;
    for(;i<A.size();i++){
        if(A[i]==0){
            B--;
        }
        while(B < 0) {
            if(A[j] == 0) {
                B++;
            }
            j++;
        }
        if(i-j+1 > max_size){
            start=j;
            max_size = i-j+1;
            
        }
    }
    for(i=start;i<start+max_size;i++){
        res.push_back(i);
    }
    return res;
}

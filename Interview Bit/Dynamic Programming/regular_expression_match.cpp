int Solution::isMatch(const string A, const string B) {
    int i=0,j=0,start=-1,end=-1;
    while(i<A.size()){
        if(A[i]==B[j] || B[j]=='?'){
            i++;
            j++;
        }
        else if(B[j]=='*'){
            start = j++;
            end = i;
        }
        else if(start > -1){
            i = ++end;
            j = start+1;
        }
        else
         return 0;
    }
    while(j<B.length())
        if(B[j++]!='*')
            return 0;
    return 1;
    
}

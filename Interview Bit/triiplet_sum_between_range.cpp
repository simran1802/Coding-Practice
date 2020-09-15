int Solution::solve(vector<string> &A) {
    float a = stof(A[0]);
    float b = stof(A[1]);
    for(int i=2;i<A.size();i++){
        if(1<a+b+stof(A[i])&&a+b+stof(A[i])<2)
            return 1;
        else if(a+b+stof(A[i])<1){
            if(min(a,b)<stof(A[i])){
                if(a>b)
                    b = stof(A[i]);
                else
                    a = stof(A[i]);
                
            }
        }
        else if(a+b+stof(A[i])>2){
            if(max(a,b) > stof(A[i])){
                if(a>b)
                    a = stof(A[i]);
                else
                    b = stof(A[i]);
            }
        }
    }
    return 0;
}

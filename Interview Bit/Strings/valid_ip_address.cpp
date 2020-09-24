bool isvalid(string A){
    if(A.size()>1 && A[0]=='0')
        return 0;
    if(stoi(A)<=255 && stoi(A)>=0)
        return 1;
    else
        return 0;
}

vector<string> Solution::restoreIpAddresses(string A) {
    vector<string> res;
    if(A.size()>12 || A.size()<4)
        return res;
    for(int i=1;i<=4;i++){
        string first=A.substr(0,i);
        if(!isvalid(first))
            continue;
        for(int j=1;i+j<A.size() && j<4;j++){
            string second = A.substr(i,j);
            if(!isvalid(second))
                continue;
            for(int k=1;i+j+k<A.size() && k<4;k++){
                string third = A.substr(i+j,k);
                string fourth = A.substr(i+j+k);
                if(isvalid(third) && isvalid(fourth)){
                    string curr = first + "." + second + "." + third + "." + fourth;
                    res.push_back(curr);
                    
                }
            }
        }
    }
    return res;
}

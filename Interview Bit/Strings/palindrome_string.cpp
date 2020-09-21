int Solution::isPalindrome(string A) {
    string t;
    for(int i=0;i<A.size();i++){
        if(isalnum(A[i]))
            t += tolower(A[i]);
        
    }
    int j = t.size()-1;
    for(int i=0;i<t.size()/2;i++){
        if(t[i] != t[j-i])
            return 0;
    }
    return 1;
}

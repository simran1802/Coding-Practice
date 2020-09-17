static bool isprime(int A){
    if(A<=1)
        return false;
    if(A==2)
        return true;
    for(int i=2;i<=sqrt(A);i++){
        if(i<=A && A%i==0)
            return false;
    }
    return true;
}

vector<int> Solution::primesum(int A) {
    for(int i=2;i<=A/2;i++){
        if(isprime(i) && isprime(A-i))
            if(i > A-i)
                return {A-i,i};
            else
                return {i,A-i};
    }
}

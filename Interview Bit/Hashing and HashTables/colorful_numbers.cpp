int Solution::colorful(int A) {
    unordered_map<int,int> res;
    while(A){
        int prod=1, num=A;
        while(num){
            prod = prod*(num%10);
            num = num/10;
            if(res[prod]==1)
                return 0;
            res[prod] = 1;
        }
        A = A/10;
    }
    return 1;
    
}

int i;
    int n = A.size();
    long long int a,b,c;
    long long int tot, stot;
    long long int sum=0;
    long long int ssum=0;
    vector<int> answer(2,0);
    
    tot = (long long int) n*(n+1)/2;
    stot =(long long int) n*(2*n+1)*(n+1)/6;
    for(i=0;i<n;i++){
        sum += A[i];
        ssum += (long long int) A[i]*A[i];
    }
    
    a = sum-tot;    // x - y
    b = ssum-stot;  // x2 - y2
    c = b/a;        // x + y
    
    answer[0] = (a+c)/2;
    answer[1] = c-answer[0];
    return answer;

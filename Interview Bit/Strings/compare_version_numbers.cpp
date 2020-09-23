 bool firstdot = false;
    for( int i =0 ; i<A.length();i++ )
    {
        if(A[i]=='.'){
            if(!firstdot){
                firstdot=true;
            }else{
                A.erase(A.begin()+i);
            }
        }
    }
    firstdot = false;
    for( int i =0 ; i<B.length();i++ )
    {
        if(B[i]=='.'){
            if(!firstdot){
                firstdot=true;
            }else{
                B.erase(B.begin()+i);
            }
        }
    }
    long double bn = stod(B);
    long double an = stod(A);
    if(an>bn){return 1;}
    else if(an<bn){return -1;}
    else{return 0;}

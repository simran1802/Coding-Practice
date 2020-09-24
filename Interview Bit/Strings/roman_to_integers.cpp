int Solution::romanToInt(string A) {
    if(A=="" || A.size()==0)
        return 0;
    map <char, int> romtoInt;

    romtoInt['I']= 1;
    romtoInt['V']= 5;
    romtoInt['X']= 10;
    romtoInt['L']= 50;
    romtoInt['C']= 100;
    romtoInt['D']= 500;
    romtoInt['M']= 1000;
    
    int result=0;
    
    for(int i=0;i<A.length()-1;i++){
        if(romtoInt[A[i]]>=romtoInt[A[i+1]]){
            result =result+romtoInt[A[i]];
            
        }
        
        else{
            result =result-romtoInt[A[i]];
        }
    }
    
    result = result + romtoInt[A[A.length()-1]];
    
    return result;

}

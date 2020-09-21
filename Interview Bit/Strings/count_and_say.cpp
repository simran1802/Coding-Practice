string Solution::countAndSay(int n) {
    if(n==1)
        return "1";
    // if(A==2)
    //     return "11";
    string s="1";
    
    while(--n)
    {
        string curr="";
        for(int i=0,j=0;i<s.length();i=j)
        {
            while(j<s.length() && s[i]==s[j])
                j++;
            
            for(char c: (to_string)(j-i))
                    curr+= c;
            curr+= s[i];
        }
        s=curr;
        
    }
    return s;
    
}

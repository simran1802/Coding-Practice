string Solution::minWindow(string s, string t) {
    int n = s.length(), m = t.length();
int c[256] = {}, temp[256] = {};

for(int i = 0; i < m; i++)
    c[t[i] - '0']++;
    
int count = 0,st = 0,st_,mn = n+1;    
for(int i = 0; i < n; i++)
{
    temp[s[i] - '0']++;
    
    if(c[s[i] - '0'] != 0 && c[s[i] - '0'] >= temp[s[i] - '0'])
        count++;
    if(count == m)
    {
        while(temp[s[st] - '0'] > c[s[st] - '0'] || c[s[st] - '0'] == 0){
       
        if(temp[s[st] - '0'] > c[s[st] - '0'])
        temp[s[st] - '0']--;
        
         st++;
        }
        
        if(mn > i - st +1)
        {
            st_ = st;
            mn = i - st +1;
        }
        
        
        temp[s[st] - '0']--;
        st++;
        count--;
    }
    
    
}

if(mn == n+1)
return "";

return s.substr(st_,mn);
}

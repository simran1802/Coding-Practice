vector<string> Solution::prettyJSON(string s) {
    string s1,d;
    int gap=0;
vector<string> ans;

int i,j,l=s.length();
s1="";



for(i=0;i<l;i++)
{  
    if(s[i]==' '){continue;}
    if(s[i]=='{' || s[i]=='[')
    {    
        if(s1!="")
        {
             d="";
             for(j=0;j<gap;j++)
             { d=d+"\t"; }
             d=d+s1;
             ans.push_back(d);
             //cout<<d<<endl;
             
        }
        
        d="";
        for(j=0;j<gap;j++)
        { d=d+"\t"; }
        d=d+s[i];
       ans.push_back(d);
       //cout<<d<<endl;
       gap++;
       s1="";
       
    }
    else if(s[i]==',')
    {
             d="";
             for(j=0;j<gap;j++)
             { d=d+"\t"; }
             d=d+s1+s[i];
             ans.push_back(d);
             //cout<<d<<endl;
             s1="";
    }
    else if(s[i]=='}' || s[i]==']')
    {
        if(s1!="")
        {
             d="";
             for(j=0;j<gap;j++)
             { d=d+"\t"; }
             d=d+s1;
             ans.push_back(d);
             //cout<<d<<endl;
             
        }
        gap--;
        
         d="";
        for(j=0;j<gap;j++)
        { d=d+"\t"; }
        d=d+s[i];
       if(s[i+1]==','){ d=d+','; i++;}    
       ans.push_back(d);
       //cout<<d<<endl;
       s1="";
        
    }
    else
    {
        s1=s1+s[i];
    }
    
    
    
}


return ans;
}

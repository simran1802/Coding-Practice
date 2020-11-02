bool findempty(int &row, int &col, vector<vector<char> > &A)
{
    for(row=0;row<A.size();row++)
    {
        for(col=0;col<A[row].size();col++)
        {
            if(A[row][col]=='.')
                return true;
        }
    }
    return false;
}

bool isSafe(int row,int col,int num, vector<vector<char> > &A)
{
    
    //same row
    for(int i=0;i<A.size();i++)
    {
        if(A[row][i]==('0'+num))
        {
            return false;
        }
    }
    
    //same column

    for(int i=0;i<A.size();i++)
    {
        if(A[i][col]==('0'+num))
        {
            return false;
        }
    }
    
    
    //same 3 x 3 block
    int block_row=row-(row%3);
    int block_col=col-(col%3);
    
    for(int i=block_row;i<block_row+3;i++)
    {
        for(int j=block_col;j<block_col+3;j++)
        {
            if(A[i][j]==('0'+num))
            {
                return false;
            }
        }
    }
    
   // cout<<"yaha"<<block_row<<block_col<<"\n";
    
    return true;
    
    
}

bool find(vector<vector<char> > &A)
{
    int row,col;
    
    if(!findempty(row,col,A))
    {
        return true;
    }
    
    
    for(int num=1;num<=9;num++)
    {
        if(isSafe(row,col,num,A))
        {
            A[row][col]='0'+num;
            
            if(find(A))
                return true;
            
            A[row][col]='.';
        }
    }
    return false;
    
}





void Solution::solveSudoku(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    bool ans=find(A);
    return;
}

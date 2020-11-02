bool check(vector<string> &path,int n,int row, int col){
    for(int i=0;i<=col;i++){
        if(path[row][i]=='Q'){
            return false;
        }
    }
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(path[i][j]=='Q'){
            return false;
        }
    }
    for(int i=row,j=col;i<n && j>=0;i++,j--){
        if(path[i][j]=='Q'){
            return false;
        }
    }
    return true;
}

void queens(vector<vector<string>> &ans,vector<string> &path,int n, int col){
    if(col==n){
        ans.push_back(path);
    }
    for(int i=0;i<n;i++){
        if(check(path,n,i,col)){
            path[i][col]='Q';
            queens(ans,path,n,col+1);
            path[i][col]='.';
        }
    }
}

vector<vector<string> > Solution::solveNQueens(int a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<string>> ans;
    vector<string> path(a,string(a,'.'));
    queens(ans,path,a,0);
    return ans;
}

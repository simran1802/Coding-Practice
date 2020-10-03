vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> sol;
int a=A.size();
int b=B.size();
int i=0,j=0;
while(i<a && j<b)
{

    if(A[i]==B[j])
    {
        sol.push_back(A[i]);
        i++;
        j++;
    }
    if(A[i]<B[j])
    {
        i++;
    }
    if(A[i]>B[j])
    {
        j++;
    }
}
return sol;

}

int Solution::maxPoints(vector<int> &x, vector<int> &y) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = x.size();
    if(n<=2) return n;
    int max_points = 2;
    
    unordered_map<double,int> map;
    
    for(int i=0;i<n;i++){
        int same_points = 0;
        int inf_slope = 0; // verticle points
        int curr_max = 0;
        for(int j=i+1;j<n;j++){
            if(x[i]==x[j] && y[i]==y[j]) same_points++; // avoinding 0/0 case
            else if(x[i]==x[j]){        // avoiding division by 0
                inf_slope++;
                curr_max = max(curr_max,inf_slope);
            }else{
                double slope = (y[j]-y[i])/((x[j]-x[i])*1.0);
                map[slope]++;
                curr_max = max(curr_max,map[slope]);
            }
        }
        max_points = max(max_points,curr_max + same_points + 1);
        map.clear();
    }
    
    return max_points;
}

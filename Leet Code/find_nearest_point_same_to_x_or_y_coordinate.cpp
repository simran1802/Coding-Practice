class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n=points.size(),mn=INT_MAX,man_dist,ans=-1;
        for(int i=0;i<n;i++){
            if(points[i][0]==x || points[i][1]==y){
                man_dist = abs(x-points[i][0]) + abs(y-points[i][1]);
                if(man_dist<mn)
                    mn=man_dist, ans=i;
            }
        }
        return ans;
    }
};

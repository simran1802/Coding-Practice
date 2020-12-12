class Solution {
public:
    int stoneGameVI(vector<int>& a, vector<int>& b) {
        int m = a.size();
        vector<vector<int>> indices(201);
        for (int i = 0; i < m; ++i) {
            indices[a[i] + b[i]].push_back(i);
        }
        
        bool turn = true;
        int ta = 0, tb = 0;
        for (int i = 200; i >= 0; --i) {
            for (auto index: indices[i]) {
                if (turn) {
					ta += a[index];
                } else {
                    tb += b[index];
                }

                turn = !turn;    
            }
        }
        
        if (ta > tb) return 1;
        else if (ta < tb) return -1;
        return 0;
    }  
};

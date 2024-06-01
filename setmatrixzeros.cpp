class Solution {
public:

void solve(vector<vector<int>>&v){
    int n= v.size();
    int m = v[0].size();
    int col0 = 1;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j] == 0){
                v[i][0] =0;
                if(j != 0) v[0][j] = 0;
                else col0 = 0;
             
            }
        }
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(v[i][j] != 0){
                if(v[0][j] == 0 || v[i][0] == 0){
                    v[i][j] = 0;
                }
            }
        }
    }

if(v[0][0] == 0){
    for(int j=0;j<m;j++){
        v[0][j] = 0;
    }
}
if(col0 == 0){
    for(int i=0;i<n;i++){
        v[i][0] = 0;
    }
}

}

    void setZeroes(vector<vector<int>>& matrix) {
        solve(matrix);
    }
};

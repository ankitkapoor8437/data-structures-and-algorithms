class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int x = matrix.size();
        int y = matrix[0].size();
        vector<vector<int>> v(y, vector<int>(x,0));
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                v[j][i]=matrix[i][j];
            }
        }
        return v;
    }
};
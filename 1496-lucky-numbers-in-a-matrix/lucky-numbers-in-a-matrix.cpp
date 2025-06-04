class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
       int row = matrix.size();
       int col = matrix[0].size();
       int rowMinMax = INT_MIN;
       int colMaxMin = INT_MAX;
       for(int i=0;i<row;i++){
        int rmin = INT_MAX;
        for(int j=0;j<col;j++){
            int cur = matrix[i][j];
            rmin = min(rmin,cur);
        }
        rowMinMax = max(rowMinMax,rmin);
       }
        for(int i=0;i<col;i++){
        int cmax = INT_MIN;
        for(int j=0;j<row;j++){
            int cur = matrix[j][i];
            cmax = max(cmax,cur);
        }
        colMaxMin = min(colMaxMin,cmax);
       } 

        if(rowMinMax==colMaxMin) 
            return {rowMinMax};
        return {};

    }
};
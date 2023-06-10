class Solution {
public:
    //Brute force
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int col=matrix[0].size();
        
        vector<bool>rowzero(rows,false);
        vector<bool>colzero(col,false);
        
        // identifying which element is zero
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    rowzero[i]=true;
                    colzero[j]=true;
                }
            }
        }
        
        // row zero kerngee
        for(int i=0;i<rows;i++){
            if(rowzero[i]){
            for(int j=0;j<col;j++){
                    matrix[i][j]=0;
                }
            }
        }
        
        // col zero krenge
        for(int j=0;j<col;j++){
                if(colzero[j]){
                    for(int i=0;i<rows;i++){
                    matrix[i][j]=0;
                    }
               }
        }
    }
};
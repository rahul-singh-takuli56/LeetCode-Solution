class Solution {
public:
    void dfs(vector<vector<int>>&image,int row,int col,int color,int val){
         if(row<0 || row>=image.size() || col<0 || col>= image[0].size() || image[row][col] == color || image[row][col] != val)
        {
            return;
        }
        image[row][col]=color;
        dfs(image,row+1,col,color,val);
        dfs(image,row,col+1,color,val);
        dfs(image,row-1,col,color,val);
        dfs(image,row,col-1,color,val);

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val=image[sr][sc];
        dfs(image,sr,sc,color,val);
        return image;
    }
};
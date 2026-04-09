class Solution {
public:


    int dfs(vector<vector<int>>& grid, int i, int j){
        int m = grid.size();
        int n = grid[0].size();
        int area = 1;
        static const vector <pair<int,int>> directions = {
            {0,1},{1,0},{0,-1},{-1,0}
        };

        if(i<0||i>=m||j<0||j>=n||grid[i][j]!=1){
            return 0 ;
        }
        grid[i][j]=0;
        for(auto dir: directions){
            int ni = i+dir.first;
            int nj = j+dir.second;
            area+=dfs(grid,ni,nj);
        }

        return area;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int max_area = 0;

        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    max_area = max(max_area,dfs(grid,i,j));
                }
            }
        }

        return max_area;
    }
};

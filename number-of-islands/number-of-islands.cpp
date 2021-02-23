class Solution {
public:
    void calculate(vector<vector<char>>& grid, int i, int j) {
        int rows = grid.size();
        int cols = grid[0].size();
        if(i < 0 || j < 0 || i >= rows || j >= cols || grid[i][j] != '1')
            return;
        grid[i][j] = '2';
        calculate(grid, i + 1, j);
        calculate(grid, i - 1, j);
        calculate(grid, i, j + 1);
        calculate(grid, i, j - 1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == '1') {
                    calculate(grid, i, j);
                    islands++;
                }
            }
        }
        return islands;
    }
};

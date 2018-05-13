#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        if (row == 0)
            return 0;
        int col = grid[0].size();

        vector<int> d(col, 0);
        vector<vector<int>> dp(row, d);

        int res = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == '1' && dp[i][j] == 0) {
                    res++;
                    expand(grid, dp, i, j);
                }
            }
        }

        return res;
    }

    void expand(vector<vector<char>>& grid, vector<vector<int>>& dp, int row, int col) {
        if (0 <= row && row < grid.size() && 0 <= col && col <= grid[0].size()
            && grid[row][col] == '1' && dp[row][col] == 0) {

            dp[row][col] = 1;
            expand(grid, dp, row-1, col);
            expand(grid, dp, row+1, col);
            expand(grid, dp, row, col-1);
            expand(grid, dp, row, col+1);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
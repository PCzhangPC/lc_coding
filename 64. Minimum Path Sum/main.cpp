#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rows = grid.size();
        if (rows == 0)
            return 0;
        int cols = grid[0].size();

        vector<vector<int>> table(rows, vector<int>(cols, 0));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (i == 0 && j == 0)
                    table[i][j] = grid[i][j];
                else if (i == 0)
                    table[i][j] = grid[i][j] + table[i][j - 1];
                else if (j == 0)
                    table[i][j] = grid[i][j] + table[i - 1][j];
                else
                    table[i][j] = grid[i][j] + (table[i - 1][j] < table[i][j - 1] ? table[i - 1][j] : table[i][j - 1]);
            }
        }

        return table[rows - 1][cols - 1];
    }
};

int main() {
    vector<vector<int>> grid = {{1,3,1}, {1,5,1}};
    Solution s;
    cout << s.minPathSum(grid) << endl;
    return 0;
}
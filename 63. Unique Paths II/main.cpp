#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int rows = obstacleGrid.size();
        if (rows <= 0)
            return 0;
        int cols = obstacleGrid[0].size();

        vector<vector<int>> table(rows, vector<int>(cols, 0));
        for (int i = 0; i < cols; i++) {
            if (obstacleGrid[0][i] == 0)
                table[0][i] = 1;
            else
                break;
        }

        for (int i = 0; i < rows; i++) {
            if (obstacleGrid[i][0] == 0)
                table[i][0] = 1;
            else
                break;
        }

        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (obstacleGrid[i][j] == 1)
                    table[i][j] = 0;
                else
                    table[i][j] = table[i - 1][j] + table[i][j - 1];
            }
        }

        return table[rows - 1][cols - 1];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
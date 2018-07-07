#include <iostream>
#include <vector>
using namespace std;

enum dir{
    up = 0,
    down,
    lef,
    righ
};

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if (!grid.size() || !grid[0].size())
            return 0;

        int i = 0;
        int j = 0;
        bool find_flag = false;
        for (;i < grid.size(); i++) {
            j = 0;
            for (; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    find_flag = 1;
                    break;
                }
            }
            if (find_flag)
                break;
        }

        if (!find_flag)
            return 0;

        return count(grid, i, j , up) + 1;
    }

    int count(vector<vector<int>>& grid, int i, int j, dir dir) {
        if (i < 0 || i == grid.size() || j < 0 || j == grid[0].size() || grid[i][j] == 0)
            return 1;

        if (grid[i][j] == -1)
            return 0;

        grid[i][j] = -1;
        int upcount = dir == up ? 0 : count(grid, i - 1, j, down);
        int downcount = dir == down ? 0 : count(grid, i + 1, j, up);
        int leftcount = dir == lef ? 0 : count(grid, i, j - 1, righ);
        int rightcount = dir == righ ? 0 : count(grid, i, j + 1, lef);

        return upcount + downcount + leftcount + rightcount;
    }
};

int main() {
    vector<vector<int>> vec = {{0},{1}};
    Solution s;
    cout << s.islandPerimeter(vec);
    return 0;
}
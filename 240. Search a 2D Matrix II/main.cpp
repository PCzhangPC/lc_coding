#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        if (!row)
            return false;

        int col = matrix[0].size();
        int x = 0;
        int y = col - 1;
        while (x < row && y >= 0) {
            if (target == matrix[x][y])
                return true;
            else if (target < matrix[x][y])
                y--;
            else
                x++;
        }

        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}